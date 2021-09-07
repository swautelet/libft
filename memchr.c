#include<stdlib.h>

void	*ft_memchr(const void *memoryblock, int searched, size_t size)
{
	unsigned char	*s;

	s = (unsigned char *)memoryblock;
	while (size > 0)
	{
		if (*s == (unsigned char)searched)
		{
			return (s);
		}
		s++;
		size--;
	}
	return (NULL);
}
