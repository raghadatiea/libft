*This project has been created as part of the 42 curriculum by ratieh.*

# Description  

**libft** is the custom c library , the goal of this project is  
to recreate some standard c functions and implements additional  
functions.  
this project helps develop deeper understanding of c programming ,  
memory managment, array, strings, pointers and linked list.  
The library can be reused in future C projects by including  
its header file and linking the compiled static library.  

# Instructions
## Requirments

- A C compiler, such as `cc` or `gcc`.
- `make`.
- The `ar` utility to create a static library.
- The Norminette tool to check compliance with the 42 coding standard.

## Compilation

Clone the repository:

```bash
git clone https://github.com/raghadatiea/libft.git
cd libft
```

Compile the library:

```bash
make
```

This should generate the static library file:

```text
libft.a
```

The following commands for Makefile:

```bash
make clean
make fclean
make re
```

- `make clean`: removes object files.
- `make fclean`: removes object files and the compiled library.
- `make re`: cleans and recompiles the library.

## Using the Library

Include the header file in your C source file:

```c
#include "libft.h"
```

Compile your source file together with the library:

```bash
cc main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

# Library Description

The library contains reimplementations of standard C functions and additional utility functions.

## 1. Character Checks and Conversions

- `ft_isalpha`: checks whether a character is alphabetic.
- `ft_isdigit`: checks whether a character is a digit.
- `ft_isalnum`: checks whether a character is alphanumeric.
- `ft_isascii`: checks whether a character belongs to the ASCII character set.
- `ft_isprint`: checks whether a character is printable.
- `ft_toupper`: converts a lowercase letter to uppercase.
- `ft_tolower`: converts an uppercase letter to lowercase.

## 2. String Functions

- `ft_strlen`: calculates the length of a string.
- `ft_strchr`: finds the first occurrence of a character in a string.
- `ft_strrchr`: finds the last occurrence of a character in a string.
- `ft_strncmp`: compares two strings up to a specified number of characters.
- `ft_strlcpy`: copies a string into a destination buffer with a size limit.
- `ft_strlcat`: appends a string to a destination buffer with a size limit.
- `ft_strnstr`: searches for a substring within a specified length.
- `ft_strdup`: creates a dynamically allocated duplicate of a string.
- `ft_substr`: extracts a substring.
- `ft_strjoin`: concatenates two strings into a newly allocated string.
- `ft_strtrim`: removes specified characters from the beginning and end of a string.
- `ft_split`: splits a string into an array of strings using a delimiter.
- `ft_strmapi`: applies a function to each character of a string.
- `ft_striteri`: applies a function to each character using its index.
- `ft_itoa`: converts an integer into a string.

## 3. Memory Functions

- `ft_memset`: fills a memory block with a specified byte.
- `ft_bzero`: sets a memory block to zero.
- `ft_memcpy`: copies memory between non-overlapping regions.
- `ft_memmove`: copies memory safely when the source and destination overlap.
- `ft_memchr`: searches for a byte in a memory block.
- `ft_memcmp`: compares two memory blocks.
- `ft_calloc`: allocates zero-initialized memory.

## 4. File Descriptor Functions

- `ft_putchar_fd`: writes a character to a file descriptor.
- `ft_putstr_fd`: writes a string to a file descriptor.
- `ft_putendl_fd`: writes a string followed by a newline.
- `ft_putnbr_fd`: writes an integer to a file descriptor.

## 5. Linked List Functions

Implements operations on singly linked lists using the `t_list` structure.

- `ft_lstnew`: creates a new list node.
- `ft_lstadd_front`: adds a node to the beginning of a list.
- `ft_lstadd_back`: adds a node to the end of a list.
- `ft_lstsize`: counts the nodes in a list.
- `ft_lstlast`: returns the last node of a list.
- `ft_lstdelone`: deletes one node using a content-deletion function.
- `ft_lstclear`: deletes a list and its nodes.
- `ft_lstiter`: applies a function to each node's content.
- `ft_lstmap`: creates a new list by applying a function to each node's content.

# Resources

- [Linux man-pages](https://man7.org/linux/man-pages/)
- [Geeks for geeks](https://www.geeksforgeeks.org/)
- [makefile tutorial](https://makefiletutorial.com/)
- [Medium](https://medium.com/)
- [stack overflow](https://stackoverflow.com/)
## AI Usage

ChatGPT was used as a learning assistant during the development of this project.

It helped explain C programming concepts, including pointers, arrays, dynamic memory allocation, strings, and linked lists. It was also used to clarify function requirements, understand compiler warnings and errors, discuss implementation approaches, and support debugging and testing.  

Additionally, ChatGPT helped explain the implementation steps of certain functions, such as ft_split and ft_itoa, by providing examples and clarifying the logic behind their implementations.

# Author

- **Login:** raghadatiea
- **Project:** libft
- **School:** 42

