#include<stdlib.h>

void	*ft_memchr(const void *memoryblock, int searched, size_t size)
{
	while (size > 0)
	{
		if (*(int *)memoryblock == searched)
		{
			return ((void *) memoryblock);
		}
		memoryblock++;
		size--;
	}
	return (NULL);
}
