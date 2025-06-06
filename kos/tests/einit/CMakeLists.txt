project (einit)

# Toolkit for working with NK parser.
include (platform/image)
include (${KL_SDK_ROOT_PATH}/common/build-sd-image.cmake)

# Set compilation flags.
project_header_default ("STANDARD_GNU_11:YES" "STRICT_WARNINGS:NO")

# Define an ENTITIES variable with a list of entities.
set (ENTITIES
        Client
		Server
        ${precompiled_vfsVfsNet}
        ${rump_DHCPCD_ENTITY})

if ("${CMAKE_SYSTEM_PROCESSOR}" MATCHES "aarch64")
    set (SECURITY_PSL_FILE "src/security.psl.in")
else ()
    message (FATAL_ERROR "${CMAKE_SYSTEM_PROCESSOR} architecture is not supported." )
endif ()

if (ROOTFS_SDCARD)
    set (ROOTFS_ENTITY "kl.VfsSdCardFs")
    set (ROOTFS_DEVICE "sdcard")
    set (FS_BACKEND ${precompiled_vfsVfsSdCardFs})
    set (DISK_IMAGE sdcard0.img)
    set (DISK_IMAGE_FS fat32)
    set (DISK_SIZE 150)
    set (QEMU_FLAGS "-m 2048 -sd ${DISK_IMAGE}")
else()
    set (ROOTFS_ENTITY "kl.VfsRamFs")
    set (ROOTFS_DEVICE "ramfs")
    set (FS_BACKEND ${precompiled_vfsVfsRamFs})
    set (DISK_IMAGE ramdisk0.img)
    set (DISK_IMAGE_FS ext4)
    set (DISK_SIZE 150)
    set (FILES ${CMAKE_BINARY_DIR}/einit/${DISK_IMAGE})
endif()

# Information about selected configuration files sourse
message ("Used DHCP client daemon configuration from ${ROOTFS_DEVICE}:/etc/dhcpcd.conf")
message ("Used NTP client daemon configuration from ${ROOTFS_DEVICE}:/etc/ntp.conf")

list (APPEND ENTITIES ${FS_BACKEND})

set_target_properties(${FS_BACKEND} PROPERTIES
    EXTRA_ARGS "\
    - -l
    - devfs /dev devfs 0")

set (EXTRA_CONNECTIONS "\
  - target: kl.VfsNet
    id: kl.VfsNet
  - target: ${ROOTFS_ENTITY}
    id: ${ROOTFS_ENTITY}")

# Set additional connections for rump_DHCPCD_ENTITY entity
set_target_properties (${rump_DHCPCD_ENTITY} PROPERTIES
    DEPENDS_ON_ENTITY ""
    EXTRA_CONNECTIONS ${EXTRA_CONNECTIONS}
    EXTRA_ENV "\
    VFS_FILESYSTEM_BACKEND: client{fs->net}:${ROOTFS_ENTITY}
    VFS_NETWORK_BACKEND: client:kl.VfsNet"
    EXTRA_ARGS "\
    - '-4'
    - '-f'
    - /etc/dhcpcd.conf")

# Add a target for making and copying the disk image to the example build
# directory.
set (CREATE_DISK_IMAGE $ENV{SDK_PREFIX}/common/prepare_hdd_img.sh)
set (DISK_IMAGE_DIR ${CMAKE_SOURCE_DIR}/resources/hdd)
add_custom_target (${DISK_IMAGE}
    COMMAND ${CREATE_DISK_IMAGE} -d ${DISK_IMAGE_DIR} -img ${DISK_IMAGE} -f ${DISK_IMAGE_FS} -s ${DISK_SIZE})

# KasperskyOS image for the target hardware platform.
build_kos_hw_image (kos-image
                    EINIT_ENTITY EinitHw
                    CONNECTIONS_CFG "src/init.yaml.in"
                    SECURITY_PSL "src/security.psl.in"
                    IMAGE_FILES ${ENTITIES}
                                ${FILES})

# Create a top-level CMake target named sd-image which can be used
# when building an SD card image to be started on the hardware platform.
build_sd_image (sd-image
                KOS_IMAGE_TARGET kos-image
                IMAGE_FS ${IMAGE_FS})

# KasperskyOS image depends on disk image generation only if ramdisk used
if (NOT ROOTFS_SDCARD)
    add_dependencies (kos-image ${DISK_IMAGE})
endif ()

# KasperskyOS image for QEMU with simulation targets (sim, gdbsim, gdb).
build_kos_qemu_image (kos-qemu-image
                      EINIT_ENTITY EinitQemu
                      CONNECTIONS_CFG "src/init.yaml.in"
                      SECURITY_PSL ${SECURITY_PSL_FILE}
                      QEMU_FLAGS "${QEMU_FLAGS} -nic user,hostfwd=tcp::8000-:8000 -display none"
                      IMAGE_FILES ${ENTITIES}
                                  ${FILES})
add_dependencies (kos-qemu-image ${DISK_IMAGE})

#set_target_properties (EinitHw PROPERTIES LINK_FLAGS ${VULN_LDFLAGS})
#set_target_properties (EinitQemu PROPERTIES LINK_FLAGS ${VULN_LDFLAGS})
