#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new_area;
	size_t	total_size;

	total_size = (nmemb * size);
	new_area = (void *)malloc(total_size);
	if (nmemb != 0 && total_size / nmemb != size)
	{
		return (NULL);
	}
	if (new_area != NULL)
	{
		ft_bzero(new_area, nmemb * size);
	}
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
