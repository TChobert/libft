#ifndef LIBFT_H
# define LIBFT_H

// INCLUDES --------------------------------------------------------------------

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>
# include <ctype.h>
# include <string.h>

// PROTOTYPES ------------------------------------------------------------------

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);

#endif
