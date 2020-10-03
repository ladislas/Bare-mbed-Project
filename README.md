# Bare mbed Project

⚠️ ⚠️ ⚠️

**This repository is not maintained anymore.**

Development has been moved to [ladislas/mbed-cmake-template](https://github.com/ladislas/mbed-cmake-template).

⚠️ ⚠️ ⚠️

## Introduction

This repository can be used as a starting template for [mbed](https://github.com/ARMmbed/mbed-os) projects with sane defaults:

- use [mbed-cli](https://github.com/ARMmbed/mbed-cli)
- write code with VSCode
- simple directory structure
- format with `.clang-format` and `.editorconfig`

It's the little cousin of [Bare Arduino Project](https://github.com/ladislas/Bare-Arduino-Project)

## Installation

Before starting, make sure you've read [mbed documentation](https://os.mbed.com/docs/mbed-os/v6.1/introduction/index.html).

### 1. Install mbed-cli

I recommend the manual install. Make sure to follow the instructions from mbed:

> https://os.mbed.com/docs/mbed-os/v6.1/build-tools/install-and-set-up.html

If you want to use (at your own risks) Python 3, do the following:

```bash
# for the latest stable version
$ pip3 install -U --user mbed-cli pyserial

# for HEAD
$ pip3 install -U --user https://github.com/ARMmbed/mbed-cli/archive/master.zip
```

### 2. Install arm-none-eabi-gcc

For macOS:

```bash
$ brew tap ArmMbed/homebrew-formulae
$ brew install arm-none-eabi-gcc
```
For Windows & Linux:

You can download the toolchain here:

> https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads

### 3. Import project

Use `mbed import` to import the project:

```bash
$ cd to/where/the/project/should/be
$ mbed import https://github.com/ladislas/Bare-mbed-Project my-project-name
```

Alternatively, you can use git to do the same with the advantage of making a shallow clone to save space and time:

```bash
$ git clone https://github.com/ladislas/Bare-mbed-Project my-project-name
$ cd my-project-name
$ git clone --depth=1 https://github.com/ARMmbed/mbed-os ./lib/mbed-os
```

### 4. Publish to Github (optional)

[Create a Github repository](https://github.com/new) and push to it:

```bash
$ git remote set-url origin https://github.com/{{ GITHUB USERNAME }}/my-project-name
$ git push --set-upstream origin master
```

## Usage

### 1. Edit `.mbed`

Don't forget to set your target and favorite toolchain, for example:

```bash
MBED_OS_DIR=./lib/mbed-os
TARGET=NUCLEO_WB55RG
TOOLCHAIN=GCC_ARM
ROOT=.
```

Before running `mbed compile`.

### 2. Edit `.mbedignore`

To speed up compilation time, we've setup a `.mbedignore` file that removes some files from the compilation process.

If you get error about missing headers when compiling, make sure the header's directory is not set in the `.mbedignore` file.

Note that it has no impact on binary size after linking (or should not have anyway...).

### 3. Writing tests

> coming soon...

## Notes

The templates comes with a simple `HelloWorld` library that you can use as an example and/or use to make sure your program works.

## Bugs & Contributing

Please open an issue or create a PR.

## Authors

Made with ❤️ by:

- **Ladislas de Toldi** - [ladislas](https://github.com/ladislas)

## License

Apache 2.0 @ Ladislas de Toldi (Ladislas [at] detoldi dot me)


