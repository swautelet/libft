#include<stdlib.h>

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	i = 0;
	r = malloc (len + 1);
	if (r == NULL)
		return (NULL);
	while (i < len)
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
