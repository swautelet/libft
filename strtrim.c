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

static size_t	ft_len(const char *s1, const char *del)
{
	size_t	len;
	size_t	i;
	size_t	l;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i])
	{
		l = 0;
		while (del[l])
		{
			if (s1[i] == del[l])
				len = len - 1;
			l++;
		}
		i++;
	}
	return (len);
}

char	*ft_strtrim(const char *s1, const char *del)
{
	size_t	l;
	size_t	i;
	size_t	len;
	char	*r;

	r = malloc(len + 1);
	if (r == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		l = 0;
		while (del[l])
		{
			if (*s1 == del[l])
			{
				s1++;
				l = 0;
			}
			l++;
		}
		r[i++] = *s1++;
	}
	r = "\0";
	return (r);
}
