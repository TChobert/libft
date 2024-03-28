#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	total_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	total_len = dst_len + src_len;
	if (size == 0 || size <= dst_len)
	{
		return (total_len);
	}
	while (i + dst_len < size - 1 && src[i] != '\0')
	{
		dst[i + dst_len] = src[i];
		++i;
	}
	dst[i + dst_len] = '\0';
	return (total_len);
}

int	main(int ac, char **av)
{
	(void)ac;
	char	dst[11] = "Bjr ";

	printf("%zu\n", ft_strlcat(dst, av[1], 20));
	printf("%s\n", dst);
	return (EXIT_SUCCESS);
}
