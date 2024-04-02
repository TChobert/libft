#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new_area;

	new_area = (void *)malloc(nmemb * sizeof(size));
	if (new_area == NULL)
	{
		return (new_area);
	}
	ft_bzero(new_area, nmemb);
	return (new_area);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	char	*ptr = ft_calloc(atoi(av[1]), sizeof(char));
	if (ptr == NULL)
	{
		return (- 1);
	}
	for (int i = 0; i < atoi(av[1]); ++i)
	{
		printf("%d", ptr[i]);
	}
	printf("\n");
	return (EXIT_SUCCESS);
}
*/
