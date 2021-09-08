#include<stdlib.h>

static size_t	ft_count(const char *str, const char c)
{
	size_t	l;

	l = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		l++;
		while (*str && *str != c)
			str++;
	}
	return (l);
}

static int	ft_len(const char *str, const char c)
{
	int d;

	d = 0;
	while (*str && *str != c)
	{
		d++;
		str++;
	}
	return (d);
}

char	**ft_split(const char *str, char c)
{
	char	**r;
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	r = malloc (sizeof(char *) * ft_count(str, c));
	if (r == NULL)
		return (NULL);
	while (*str)
	{
		while (*str == c)
			str++;
		if (*(str - 1) == c)
		{
			i = 0;
			l++;
		}
		r[l] = malloc (sizeof(char) * ft_len(str, c));
		r[l][i] = *str;
		str++;
		i++;
	}
	return (r);
}
