#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	t_byte			current;
	unsigned char	value;

	current = s;
	value = (unsigned char)c;
	while (n > 0)
	{
		*current = value;
		++current;
		--n;
	}
	return (s);
}
/*
int main(void)
{
	char	array[] = "AAAAA";
	char	array2[] = "BBBBB";
	ft_memset(array2 + 1, 'a', 3);
	memset(array + 1, 'a', 3);
	printf("mine = %s\n", array2);
	printf("true = %s\n", array);
	return (EXIT_SUCCESS);
}

int	main(void)
{
	int	count = 0;
	int	array[] = {1, 2, 3};
	int	array2[] = {1, 2, 3};
	int size = sizeof(int) * 3;
	while (count < 3)
	{
		printf("%d", array[count]);
		++count;
	}
	printf("\n");
	ft_memset(array, 'A', size);
	count = 0;
	printf("mine =");
	while (count < 3)
	{
		printf("%d", array[count]);
		++count;
	}
	printf("\n");
	memset(array2, 'A', size);
	count = 0;
	printf("true =");
	while (count < 3)
	{
		printf("%d", array2[count]);
		++count;
	}
	printf("\n");
	return (EXIT_SUCCESS);
}
*/
