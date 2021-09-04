#include<stdlib.h>

void *ft_memmove (void *dest, const void *src, size_t n)
{
	char *t;
	char *d;
	const char *s;
	size_t i;

	i = 0;
	d = dest;
	s = src;
	t = NULL;
	while (i < n)
	{
		t[i] = s[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = t[i];
		i++;
	}
	return(dest);
}