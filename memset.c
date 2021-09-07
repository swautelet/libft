#include<stdlib.h>

void	*memset(void *pointer, int value, size_t count)
{
	size_t	i;
	int		*p;

	p = pointer;
	i = 0;
	if (!pointer)
		return (0);
	while (i < count)
	{
		p[i] = value;
		i++;
	}
	return (pointer);
}
