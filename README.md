# Bare mbed Project

## Introduction

This repository can be used as a starting template for [mbed](https://github.com/ARMmbed/mbed-os) projects with sane defaults:

- use [mbed-cli](https://github.com/ARMmbed/mbed-cli)
- write code with VSCode
- simple directory structure
- format with `.clang-format` and `.editorconfig`

It's the little cousin of [Bare Arduino Project](https://github.com/ladislas/Bare-Arduino-Project)

## Installation & Usage

Before starting, make sure you've read [mbed documentation](https://os.mbed.com/docs/mbed-os/v5.13/introduction/index.html).

### 1. Install mbed-cli

I recommend the manual install. Make sure to follow the instructions from mbed:

> https://os.mbed.com/docs/mbed-os/v5.13/tools/manual-installation.html

If you want to use (at your own risks) Python 3, do the following:

```bash
# for the latest stable version
$ pip3 install -U --user mbed-cli

# for HEAD
$ pip3 install -U --user https://github.com/ARMmbed/mbed-cli/archive/master.zip
```

### 2. Install arm-none-eabi-gcc

```bash
$ brew tap ArmMbed/homebrew-formulae
$ brew install arm-none-eabi-gcc
```

### 3. Import project

Use `mbed import` to import the project:

```bash
$ cd to/where/the/project/should/be
$ mbed import https://github.com/ladislas/Bare-mbed-Project my-project-name
```

### 4. Publish to Github

[Create a Github repository](https://github.com/new) and push to it:

```bash
$ git remote set-url origin https://github.com/{{ GITHUB USERNAME }}/{{ REPO NAME }}
$ git push --set-upstream origin master
```

### 5. Edit `.mbed`

Don't forget to set your target and favorite toolchain, for example:

```bash
ROOT=.
TARGET=NUCLEO_WB55RG
TOOLCHAIN=GCC_ARM
```

## Notes

The templates comes with a simple `HelloWorld` library that you can use as an example and/or use to make sure your program works.

## Bugs & Contributing

Please open an issue or create a PR.

## Authors

Made with ❤️ by:

- **Ladislas de Toldi** - [ladislas](https://github.com/ladislas)

## License

Apache 2.0 @ Ladislas de Toldi (Ladislas [at] detoldi dot me)


