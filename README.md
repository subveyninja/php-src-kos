# PHP Interpreter for KasperskyOS

>This version of PHP Interpreter (Zend) is adapted for KasperskyOS. The PHP Interpreter operates in FastCGI mode.

## What is a PHP Interpreter for KasperskyOS?

The PHP Interpreter for KasperskyOS is based on the [PHP-8.2](https://github.com/php/php-src/tree/PHP-8.2). Please refer to [README.md](https://github.com/php/php-src/blob/master/README.md) for more information about the original PHP Interpreter not related to this project.

The PHP Interpreter for KasperskyOS has the following limitations:

* Dynamically loaded libraries are not supported. If you want to use extensions for the interpreter, include them in your solution as static libraries.
* Currently, subprocess creation isn't available in KasperskyOS Community Edition. All client requests to the PHP Interpreter are processed sequentially: a new request is executed only when a previous request has finished processing.

Other limitations and known issues are described in the [KasperskyOS Community Edition Online Help](https://support.kaspersky.com/help/KCE/1.1/en-US/limitations_and_known_problems.htm).

## Table of contents

- [PHP Interpreter for KasperskyOS](#php-interpreter-for-kasperskyos)
  - [What is a PHP Interpreter for KasperskyOS?](#what-is-a-php-interpreter-for-kasperskyos)
  - [Table of contents](#table-of-contents)
  - [Getting started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Building the PHP Interpreter](#building-the-php-interpreter)
    - [Installing and removing the PHP Interpreter](#installing-and-removing-the-php-interpreter)
  - [Usage](#usage)
    - [Examples](#examples)
  - [Testing the PHP Interpreter](#testing-the-php-interpreter)
  - [Acknowledgment](#acknowledgment)
  - [Contributing](#contributing)
  - [License](#license)

## Getting started

### Prerequisites

1. [Install](https://support.kaspersky.com/help/KCE/1.1/en-US/sdk_install_and_remove.htm) the KasperskyOS Community Edition SDK. You can download the latest version of KasperskyOS Community Edition for free from [os.kaspersky.com](https://os.kaspersky.com/development/). Minimum required version of the KasperskyOS Community Edition SDK is 1.1.0.24. For more information, see [System requirements](https://support.kaspersky.com/help/KCE/1.1/en-US/system_requirements.htm).
1. Copy project sources files to your home directory. All files that are required to build the PHP Interpreter for KasperskyOS and examples of KasperskyOS-based solutions are located in the following directory:
   ```
   ./kos
   ```
1. Set the environment variable `SDK_PREFIX` to `/opt/KasperskyOS-Community-Edition-<version>`, where `version` is the version of the KasperskyOS Community Edition SDK that you installed. To do this, run the following command:
   ```
   $ export SDK_PREFIX=/opt/KasperskyOS-Community-Edition-<version>
   ```

### Building the PHP Interpreter

Run the following script to build the PHP Interpreter for KasperskyOS:
```
./kos/php/cross-build.sh
```
The PHP Interpreter for KasperskyOS is built using the CMake build system, which is provided in the KasperskyOS Community Edition SDK.

### Installing and removing the PHP Interpreter

To install the PHP Interpreter for KasperskyOS to the KasperskyOS Community Edition SDK, run the following script with root privileges:
```
./kos/php/install.sh
```

To remove the PHP Interpreter for KasperskyOS from the KasperskyOS Community Edition SDK, run the following script with root privileges:
```
./kos/php/uninstall.sh
```

[⬆ Back to Top](#Table-of-contents)

## Usage

When you develop a KasperskyOS-based solution, use the [recommended structure of project directories](https://support.kaspersky.com/help/KCE/1.1/en-US/cmake_using_sdk_cmake.htm) to simplify usage of CMake scripts.

To include the PHP Interpreter in your KasperskyOS-based solution, follow these steps:

1. Add the `find_package()` command to the `./CMakeLists.txt` root file to find and load the `php` package.
   ```
   find_package (php REQUIRED)
   ```
   For more information about the `./CMakeLists.txt` root file, see the [KasperskyOS Community Edition Online Help](https://support.kaspersky.com/help/KCE/1.1/en-US/cmake_lists_root.htm).
1. Add the `Fpm` program to a list of program executable files defined in the `./einit/CMakeLists.txt` file as follows:
   ```
   set (ENTITIES
        Fpm
        ...)
   ```
   For more information about the `./einit/CMakeLists.txt` file for building the `Einit` initializing program, see [KasperskyOS Community Edition Online Help](https://support.kaspersky.com/help/KCE/1.1/en-US/cmake_lists_einit.htm).
1. Specify a list of IPC channels that connect the `Fpm` program to `VfsNet` and `VfsRamFs` programs in the `./einit/src/init.yaml.in` template file. For more information about the `init.yaml.in` template file, see [KasperskyOS Community Edition Online Help](https://support.kaspersky.com/help/KCE/1.1/en-US/cmake_yaml_templates.htm).
1. Create a solution security policy description in the `./einit/src/security.psl.in` template file. For more information about the `security.psl.in` template file, see [KasperskyOS Community Edition Online Help](https://support.kaspersky.com/help/KCE/1.1/en-US/cmake_psl_templates.htm).
1. Add PHP and nginx configuration files to the directory `./resources`.

### Examples

* [`./kos/examples/fpm`](kos/examples/fpm)—Version of the FastCGI Process Manager (FPM) adapted for use on KasperskyOS.
* [`./kos/examples/web_server`](kos/examples/web_server)—KasperskyOS-based dynamic web server.

[⬆ Back to Top](#Table-of-contents)

## Testing the PHP Interpreter

The test suite for the original PHP Interpreter is used to test the PHP Interpreter for KasperskyOS, but testing systems are different. The testing system for KasperskyOS consists of two programs: [`php.Server`](kos/tests/server) and [`php.Client`](kos/tests/client). The `php.Client` program parses PHPT files and sends a request, which contains a PHP script, to the `php.Server` program. The `php.Server` program executes the request and returns а result to the `php.Client` using аn HTTP response. The `php.Client` compares the received response with the expected result.

To run the tests, execute the following script:
```
./kos/tests/cross-build.sh
```

If you want to save test results to a file, go to the directory `./kos/tests` and run the following command:
```
./cross-build.sh > log.txt
```

[⬆ Back to Top](#Table-of-contents)

## Acknowledgment

This product includes PHP software, freely available from <http://www.php.net/software/>.

## Contributing

Only KasperskyOS-specific changes can be approved. See [CONTRIBUTING.md](CONTRIBUTING.md) for detailed instructions on code contribution.

## License

This project is licensed under the terms of the PHP License. See [LICENSE](LICENSE) for more information.

[⬆ Back to Top](#Table-of-contents)
