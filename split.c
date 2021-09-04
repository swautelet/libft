#include<stdlib.h>

static size_t ft_count (const char *str, const char c)
{
	size_t l;

	l = 1;
	while (*str)
	{
		if (*str == c)
			l++;
		str++;
	}
	return(l);
}

char **ft_split (const char *str, char c)
{
	char **r;
	size_t i;
	size_t l;

	i = 0;
	l = 0;
	r = malloc (sizeof(char *) * ft_count(str, c));
	while (*str)
	{
		if (*str == c)
		{
			i = 0;
			l++;
			str++;
		}
		r[l][i] = *str;
		str++;
		i++;
	}
}