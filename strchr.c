#include<stdlib.h>

char	*ft_strchr(const char *str, int searched)
{
	while (*str)
	{
		if (*str == searched)
			return ((char *)str);
		str++;
	}
	if (searched == '\0')
		return ((char *)str);
	return (NULL);
}
