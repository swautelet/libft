#include<stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	if (dest == src)
		return (NULL);
	else if (s < d)
	{
		d = d + n - 1;
		s = s + n - 1;
		while (n--)
		{
			*d-- = *s--;
		}
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
