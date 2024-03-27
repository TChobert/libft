#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main(void)
{
	char	array[] = "AAAAA";
	printf("before = %s\n", array);
	ft_bzero(array, 5);
	printf("after = %s\n", array);
}
*/
