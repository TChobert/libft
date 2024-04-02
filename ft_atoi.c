#include "libft.h"

static bool	is_space(const char *c)
{
	return ((*c >= 9 && *c <= 13) || (*c == 32));
}

static bool	is_sign(const char *c)
{
	return (*c == '-' || *c == '+');
}

static void	get_sign(const char *c, int *sign)
{
	if (*c == '-')
	{
		*sign *= - 1;
	}
}

int	ft_atoi(const char *nptr)
{
	int				i;
	int				converted_nb;
	int				sign_flag;

	i = 0;
	converted_nb = 0;
	sign_flag = 1;
	while (is_space(nptr))
	{
		++nptr;
	}
	if (is_sign(nptr))
	{
		get_sign(nptr, &sign_flag);
		++nptr;
	}
	while (ft_isdigit(nptr[i]))
	{
		converted_nb = converted_nb * 10 + (nptr[i] - 48);
		++i;
	}
	return (converted_nb * sign_flag);
}
/*
int	main(int ac, char **av)
{
	(void)ac;
	printf("mine = %d\n", ft_atoi(av[1]));
	printf("true = %d\n", atoi(av[1]));
	return (EXIT_SUCCESS);
}
*/
