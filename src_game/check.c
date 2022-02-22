#include "so_long.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*s;

	s = (char *)b;
	while (len--)
		*s++ = c;
	return (b);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*k;
	int		q;
	int		i;

	q = count * size;
	i = 0;
	k = malloc(q);
	if (!(k))
		return (0);
	while (q)
	{
		k[i] = 0;
		i++;
		q--;
	}
	return (k);
}