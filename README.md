# Libft: Your Comprehensive Custom Library

## Overview

Libft is a custom library meticulously crafted to enhance your understanding of C programming, with a primary focus on efficiency, memory management, and robustness. This library not only replicates the essential functions found in **<stdio.h>** and **<stdlib.h>** but also introduces optimized versions of these functions to minimize memory usage and eliminate the risk of segmentation faults. By providing a comprehensive collection of functions, Libft aims to become an indispensable tool for your future projects.

## Key Features

- **Efficiency**: Every function in Libft has been carefully optimized to achieve maximum efficiency and minimize memory consumption. These enhancements make it a reliable choice for any C/C++ project.

- **Memory Management**: The library places a strong emphasis on memory allocation and deallocation, ensuring that memory leaks are virtually eliminated. It guarantees that memory is used wisely and freed when no longer needed.

- **Segfault Prevention**: Every function in Libft has undergone rigorous testing to prevent segmentation faults. It can be confidently used without the worry of unforeseen crashes in your programs.

## Makefile Overview

The Makefile provided with Libft includes the following rules:

- **all**: Compiles the library and prepares it for use.

- **clean**: Deletes all object files (`.o`) generated during compilation.

- **fclean**: Deletes the library binary (`libft.a`) along with all object files.

- **re**: Executes `fclean` and `all` consecutively, effectively cleaning and rebuilding the library.

# HOW TO USE - COMPILATION
1. Clone the repository:
   - Run the following command to clone the repository:
     ```
     git clone git@github.com:jotavare/libft.git
     ```

2. Build the library:
   - Change the directory to the project folder:
     ```
     cd libft/libft
     ```
   - Compile the library using the `make` command:
     ```
     make
     ```

3. Using the library in your code:
   - Include the library's header file in your code:
     ```c
     #include "libft.h"
     ```

# MAKEFILE RULES
- `make`: Compile libft mandatory files.
- `make bonus`: Compile libft bonus files.
- `make all`: Compile mandatory + bonus files.
- `make clean`: Delete all .o (object files) files.
- `make fclean`: Delete all .o (object file) and .a (executable) files.
- `make re`: Use rules fclean + all.
