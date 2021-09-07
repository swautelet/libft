#include<stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (*str)
	{
		str++;
		l++;
	}
	return (l);
}
