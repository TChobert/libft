#include "libft.h"

void	*ft_memjoin(void const *m1, void const *m2, const size_t len_m1, const size_t len_m2)
{
	void	*mem_joined;

		mem_joined = malloc(sizeof(t_byte) * (len_m1 + len_m2));
	if (mem_joined != NULL)
	{
		ft_memmove(mem_joined, m1, len_m1);
		ft_memmove(mem_joined + len_m1, m2, len_m2);
	}
	return mem_joined;
}
