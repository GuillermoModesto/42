#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, int len)
{
	int	lil_len;
	int	i;
	int	j;

	lil_len = ft_strlen((char *)little);
	i = 0;
	j = 0;
	while ((big[i] != '\0') && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j < len))
		{
			if (j == lil_len - 1)
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (0);
}
