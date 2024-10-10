# Lox bytecode VM

[![build](https://github.com/theobori/lox-virtual-machine/actions/workflows/build.yml/badge.svg)](https://github.com/theobori/lox-virtual-machine/actions/workflows/build.yml)

[![built with nix](https://builtwithnix.org/badge.svg)](https://builtwithnix.org)

Implementing the [Lox language](https://craftinginterpreters.com/the-lox-language.html) while reading "Crafting Interpreters" by Robert Nystrom. Most of the challenges have been met, but the implementation is not 100% complete. For the moment, the most advanced functions it supports are function calls.

## 📖 Build and run

For the build, you only need the following requirements:

- [CMake](https://cmake.org/download/) minimum 3.10

To build the library, you can run the following commands.
```sh
mkdir build
cd build
cmake ..
make
```

If you want to install the library, you can run the following command.
```sh
make install
```

## 🤝 Contribute

If you want to help the project, you can follow the guidelines in [CONTRIBUTING.md](./CONTRIBUTING.md).

## 📎 Some examples

You can find basic examples in the [examples](/examples/) directory.
