#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - ('a' - 'A'));
	}
	return (c);
}
/*
int	main(void)
{
	printf("%c\n", toupper('6'));
	return (EXIT_SUCCESS);
}
*/
