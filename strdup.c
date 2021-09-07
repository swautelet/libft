#include<stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (*str != '\0')
	{
		str++;
		l++;
	}
	return (l);
}

char	*ft_strdup(const char *src)
{
	char	*r;
	size_t	i;

	i = 0;
	r = malloc (ft_strlen(src) + 1);
	if (r == NULL)
		return (NULL);
	while (src[i])
	{
		r[i] = src[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
