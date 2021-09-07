#include<stdlib.h>

int	ft_strncmp(const char *first, const char *second, size_t len)
{
	while (len > 0)
	{
		if (*first != *second)
			return (*first - *second);
		len--;
		first++;
		second++;
	}
	return (0);
}
