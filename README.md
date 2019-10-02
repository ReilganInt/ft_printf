# ft_printf
This project is a copy of the original printf function of C langage.

This code complies with the 42 school norm.

## Features

Supports all these converters, flags and modifiers:

 Type        | Name
------------ | -------------------------------------------------------------------------------
 Converters  |  %d / %s / %S / %p / %d / %D / %i / %o / %O / %u / %U / %x / %X / %c / %C / %%
 Flags       |  # / 0 / - / +
 Modifiers   |  hh / h / l / ll / j /z

 
## Compilation

Run `make` command to compile the libftprintf library.

## Usage

Compile your project with libftprintf.a.
Don't forget to include "ft_printf.h"

To compile with the repository main:
```
gcc -Wall -Werror -Wextra main.c libftprintf.a -Iincludes/
```
