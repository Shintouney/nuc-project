#ifndef NUC_H
# define NUC_H

// Macro
# define PORT_ACCESS (5050)
# define ANSI_COLOR_GREEN "\x1b[32m"
# define ANSI_COLOR_RED   "\x1b[31m"
# define ANSI_COLOR_RESET "\x1b[0m"

// Includes
// Not here right now
#include <stdio.h>
#include <sys/socket.h>

// Prototype functions
void  my_putchar(char c);
void  my_putstr(char *str);

#endif
