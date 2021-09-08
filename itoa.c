#include<stdlib.h>

static int ft_len (unsigned int n)
{
	int l;

	l = 2;
	if (n < 0)
		l++;
	while (n > 9)
	{
		l++;
		n = n / 10;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char				*r;
	int					l;
	unsigned int		t;

	if (n < 0)
		t = n * (-1);
	else
		t = n;
	l = ft_len(t);
	if (n < 0)
		l++;
	r = malloc (sizeof(char) * l);
	if (r == NULL)
		return (NULL);
	r[--l] = '\0';
	while (--l >= 0)
	{
		r[l] = 48 + (t % 10);
		t = t / 10;
	}
	if (n < 0)
		r[0] = '-';
	return (r);
}
