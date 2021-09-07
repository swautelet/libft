#include<stdlib.h>

static void	ft_bzero(void *s, size_t n)
{
	while (0 < n)
	{
		*(char *)s = '\0';
		n--;
		s++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	r = malloc (count * size);
	if (r == NULL)
		return (NULL);
	ft_bzero (r, count * size);
	return (r);
}
