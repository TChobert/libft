#include "libft.h"

static size_t	get_len_recursive(long nb, size_t final_len)
{
	if (nb < 0)
	{
		final_len += 1;
		nb = -nb;
	}
	if (nb < 10 && nb > -10)
	{
		return (final_len + 1);
	}
	else 
	{
		return (get_len_recursive(nb / 10, final_len + 1));
	}
}

static void	ft_reverse_string(char *new_str)
{
	char	temp;
	size_t	start;
	size_t	end;

	start = (new_str[0] == '-') ? 1 : 0;
	end = ft_strlen(new_str) - 1;
	while (start < end)
	{
		temp = new_str[start];
		new_str[start] = new_str[end];
		new_str[end] = temp;
		++start;
		--end;
	}
}

static void	ft_write_nbr(long nb, char *new_str)
{
	size_t	i;
	
	i = 0;
	if (nb == 0)
	{
		new_str[0] = ASCII_ZERO;
		new_str[1] = '\0';
		return;
	}
	if (nb < 0)
	{
		new_str[0] = '-';
		i = 1;
		nb = - nb;
	}
	while (nb != 0)
	{
		new_str[i] = (nb % 10) + ASCII_ZERO;
		nb = nb / 10;
		++i;
	}
	new_str[i] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	final_len;
	char	*new_str;

	final_len = get_len_recursive(n, 0);
	new_str = (char *)malloc(sizeof(char) * (final_len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	ft_write_nbr(n, new_str);
	ft_reverse_string(new_str);
	return (new_str);
}

int	main(int ac, char **av)
{
	char	*new_str;
	(void)ac;
	(void)av;
	new_str = ft_itoa(atoi(av[1]));
	printf("%s\n", new_str);
	return (EXIT_SUCCESS);
}
