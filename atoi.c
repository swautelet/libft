#include<stdlib.h>

int ft_atoi (const char *str)
{
	int s;
	int r;

	s = 1;
	r = 0;
	while (*str == "+" || *str == "-")
	{
		if (*str == "-")
			s = s * (-1);
		str++;
	}
	while (*str > "0" && *str < "9")
	{
		r = r * 10 + *str;
		str++;
	}
	return(r);
}