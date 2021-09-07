#include<stdlib.h>

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	while (n > 0)
	{
		if (*(char *)p1 != *(char *)p2)
			return (*(char *)p1 - *(char *)p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
