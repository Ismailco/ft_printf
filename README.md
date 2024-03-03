# ft_printf

A custom implementation of the `printf` function in C. developed for the 1337 school project.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Format Specifiers](#format-specifiers)
- [Examples](#examples)
- [Build and Installation](#build-and-installation)
- [Contributing](#contributing)
- [License](#license)

## Introduction

`ft_printf` is a custom implementation of the `printf` function in C, providing a versatile and extensible solution for formatted output. The goal is to offer a lightweight and efficient alternative to the standard library's `printf` function.

## Features

- Supports a wide range of format specifiers.
- Customizable and extensible.
- Lightweight and efficient.
- Easy to integrate into existing projects.

## Usage

To use `ft_printf` in your project, include the `ft_printf.h` header file, and link your project with the compiled `libftprintf.a` library.

```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");
    return 0;
}
```
## Format Specifiers
`ft_printf` supports the following format specifiers:

`%c`: Character
`%s`: String
`%d`, `%i`: Signed decimal integer
`%u`: Unsigned decimal integer
`%x`: Unsigned hexadecimal integer (lowercase)
`%X`: Unsigned hexadecimal integer (uppercase)
`%p`: Pointer (address)
## Examples
  ```c
  #include "ft_printf.h"
  
  int main() {
      char ch = 'A';
      int num = 42;
      double pi = 3.14159;
  
      ft_printf("Character: %c\n", ch);
      ft_printf("Integer: %d\n", num);
      ft_printf("Floating-point: %f\n", pi);
  
      return 0;
  }
  ```
## Build and Installation
1. Clone the repository:
  ```
  git clone <repo-url>
  ```
3. Build the library:
  ```
  make
  ```
3. Link the library in your project:
  ```
  gcc -o your_program your_program.c libftprintf.a
  ```
## License
This project is licensed under the MIT License - see the LICENSE file for details.
