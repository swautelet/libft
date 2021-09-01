#include <ctype.h>
#include <stdio.h>
int ft_isalpha (int c);

int main ()
{
	char *str = "abc123";
	printf ("%d \n", isalpha (str[3]));
	printf ("%d \n", ft_isalpha (str[3]));
}
