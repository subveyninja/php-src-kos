/*
   +----------------------------------------------------------------------+
   | Copyright (c) The PHP Group                                          |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | https://www.php.net/license/3_01.txt                                 |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
   | Author: Stig Sæther Bakken <ssb@php.net>                             |
   +----------------------------------------------------------------------+
*/

#define CONFIGURE_COMMAND " './configure'  'LIBXML_CFLAGS=-I/opt/KasperskyOS-Community-Edition-1.1.1.10/sysroot-aarch64-kos//include//libxml2' 'LIBXML_LIBS=-L/opt/KasperskyOS-Community-Edition-1.1.1.10/sysroot-aarch64-kos//lib/ -lxml2' 'OPENSSL_CFLAGS=-I/opt/KasperskyOS-Community-Edition-1.1.1.10/sysroot-aarch64-kos//include//openssl' 'OPENSSL_LIBS=-L/opt/KasperskyOS-Community-Edition-1.1.1.10/sysroot-aarch64-kos//lib/ -lssl -lcrypto' 'SQLITE_CFLAGS=-I/opt/KasperskyOS-Community-Edition-1.1.1.10/sysroot-aarch64-kos//include/' 'SQLITE_LIBS=-L/opt/KasperskyOS-Community-Edition-1.1.1.10/sysroot-aarch64-kos//lib/ -lsqlite3' '--with-openssl' '--target=aarch64' '--host=x86_64' '--bindir=/opt/KasperskyOS-Community-Edition-1.1.1.10/toolchain/bin' '--includedir=/opt/KasperskyOS-Community-Edition-1.1.1.10/sysroot-aarch64-kos//include/' '--disable-opcache' '--without-valgrind' '--enable-fpm' 'host_alias=x86_64' 'target_alias=aarch64' 'CPP=/opt/KasperskyOS-Community-Edition-1.1.1.10/toolchain/bin/aarch64-kos-cpp'"
#define PHP_ODBC_CFLAGS	""
#define PHP_ODBC_LFLAGS		""
#define PHP_ODBC_LIBS		""
#define PHP_ODBC_TYPE		""
#define PHP_OCI8_DIR			""
#define PHP_OCI8_ORACLE_VERSION		""
#define PHP_PROG_SENDMAIL	"/usr/sbin/sendmail"
#define PEAR_INSTALLDIR         ""
#define PHP_INCLUDE_PATH	".:"
#define PHP_EXTENSION_DIR       "/usr/local/lib/php/extensions/no-debug-non-zts-20220829"
#define PHP_PREFIX              "/usr/local"
#define PHP_BINDIR              "/opt/KasperskyOS-Community-Edition-1.1.1.10/toolchain/bin"
#define PHP_SBINDIR             "/usr/local/sbin"
#define PHP_MANDIR              "/usr/local/php/man"
#define PHP_LIBDIR              "/usr/local/lib/php"
#define PHP_DATADIR             "/usr/local/share/php"
#define PHP_SYSCONFDIR          "/usr/local/etc"
#define PHP_LOCALSTATEDIR       "/usr/local/var"
#define PHP_CONFIG_FILE_PATH    "/usr/local/lib"
#define PHP_CONFIG_FILE_SCAN_DIR    ""
#define PHP_SHLIB_SUFFIX        "so"
#define PHP_SHLIB_EXT_PREFIX    ""
