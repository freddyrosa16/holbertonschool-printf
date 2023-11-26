# holbertonschool-printf

## Table of Contents

- [Overview](#overview)
- [Files](#files)
- [Description](#description)
- [File Details](#file-details)

## Overview

This repository contains a custom implementation of the `printf` function, a standard C library function for formatted output. The custom implementation provides a simplified version of the original `printf` with support for character (`%c`), string (`%s`), percent sign (`%%`), decimal integer (`%d`), and integer (`%i`) conversion specifiers.

## Files

1. **_printf.c:** This is the main code of our custom function, serving as a replica of the printf function.

2. **main.h:** The header file containing the prototype for our functions.

3. **man_3_printf:** This file provides the man page for the function `_printf`, including a description, table of contents, return value, and authors (Ninoshka Perez and Freddy Rosa).

## Description

Our custom printf function aims to mirror the behavior of the standard printf function while enhancing modularity and maintainability through file separation.

## File Details

- **`_printf.c`:**
  Core implementation of the printf replica.

- **`main.h`:**
  Header file with function prototypes.

- **`man_3_printf`:**
  Detailed man page for the _printf function.


### Functionality

The overall functionality is to replicate a simplified version of the standard printf function, providing basic formatting and printing capabilities for characters, strings, and integers. Users can include this custom implementation in their C programs to achieve formatted output similar to the standard printf function.

### Return Value

The function returns the number of characters printed (excluding the null byte).

### Authors

- Ninoshka Perez
- Freddy Rosa
