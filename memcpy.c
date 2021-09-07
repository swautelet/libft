#include<stdlib.h>

void	*ft_memcpy(void *destination, const void *source, size_t size)
{
	size_t		i;
	char		*d;
	const char	*s;

	if (destination == source)
		return (NULL);
	d = destination;
	s = source;
	i = 0;
	while (i < size)
	{
		d[i] = s [i];
		i++;
	}
	return (destination);
}
