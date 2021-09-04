#include<stdlib.h>

char *ft_itoa (int n)
{
	char *r;
	int l;
	int t;

	t = n;
	l = 1;
	if (n < 0)
		l++;
	while (t > 0)
	{
		l++;
		t = t / 10;
	}
	r = malloc (sizeof(char) * l);
	r[--l] = '\0';
	if (n < 0)
		r[0] = '-';
	while (--l >= 0)
	{
		r[l] = n % 10;
		n = n / 10;
	}
	return(r);
}