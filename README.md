0x11. C - printf

# 0x11. C - printf

What you should learn from this project:

- How to use git in a team setting
- Applying variadic functions to a big project
- The complexities of printf
- Managing a lot of files and finding a good workflow

## Prototype

`int _printf(const char *format, ...);`
## Usage

- Prints a string to the standard output, according to a given format
- All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 wit\
h the command `gcc -Wall -Werror -Wextra -pedantic *.c`
- All files were linted for syntax and style with Betty
- Returns the number of characters in the output string on success, -1 otherwis\
e
- Call it this way: `_printf("format string", arguments...)` where `format stri\
ng` can contain conversion specifiers and flags,
  along with regular characters
A man page has been included, called: man_3_printf
