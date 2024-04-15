#include "libft.h"

static size_t	get_len_recursive(long nb, size_t final_len)
{
	if (nb < 10)
	{
		return (final_len + 1);
	}
	else 
	{
		return (get_len_recursive(nb / 10, final_len + 1));
	}
}

static size_t	get_len(long nb)
{
	return (get_len_recursive(nb, 0));
}

static void	ft_write_nbr(long nb, char *new_str)
{
	size_t	i;

	i = ft_strlen(new_str);
	while (nb != 0)
	{
		new_str[i] = (nb % 10) + 48;
		nb = nb / 10;
		--i;
	}
}

char	*ft_itoa(int n)
{
	size_t	final_len;
	char	*n_str;

	final_len = get_len(n);
	n_str = (char *)malloc(sizeof(char) * (final_len) + 1);
	if (n_str == NULL)
	{
		return (NULL);
	}
	n_str[final_len + 1] = '\0';
	ft_write_nbr(n, n_str);
	return (n_str);
}

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	//printf("%zu\n", get_len(atoi(av[1])));
	printf("%s\n", ft_itoa(1234567));
	return (EXIT_SUCCESS);
}
