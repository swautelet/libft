!<arch>
atoi.c          1630758541  501   20    100644  255       `
#include<stdlib.h>

int ft_atoi (const char *str)
{
	int s;
	int r;

	s = 1;
	r = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s = s * (-1);
		str++;
	}
	while (*str > '0' && *str < '9')
	{
		r = r * 10 + *str;
		str++;
	}
	return(r);
}
bzero.c         1630753854  501   20    100644  113       `
#include<stdlib.h>

void ft_bzero (void *s, size_t n)
{
	while (n > 0)
	{
		*(char *)s = '\0';
		n--;
		s++;
	}
}
calloc.c        1630753891  501   20    100644  303       `
#include<stdlib.h>

static void ft_bzero (void *s, size_t n)
{
	while (0 < n)
	{
		* (char *)s = '\0';
		n--;
		s++;
	}
}

void *ft_calloc (size_t count, size_t size)
{
    void *r;

    r = malloc (count * size);
    if (r == NULL)
        return(NULL);
    ft_bzero (r, count * size);
    return(r);
}
isalnum.c       1630753859  501   20    100644  344       `
static int ft_isdigit (int c)
{
	if (c < '9' && c > '0')
		return (1);
	else 
		return (0);
}

static int ft_isalpha (int c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	else if (c > 'a' && c < 'z')
		return (2);
	else 
		return (0);
}

int ft_isalnum (int c)
{
	if (ft_isalpha (c) == 1 || ft_isdigit (c) == 1)
		return (1);
	else
		return (0);
}
isalpha.c       1630754019  501   20    100644  130       `
int ft_isalpha (int c)
{
	if (c > 'A' && c < 'Z')
		return (1);
	else if (c > 'a' && c < 'z')
		return (2);
	else 
		return (0);
}isascii.c       1630754371  501   20    100644  84        `
int ft_isascii (int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return(0);
}isdigit.c       1630754047  501   20    100644  86        `
int ft_isdigit (int c)
{
	if (c < '9' && c > '0')
		return (1);
	else 
		return (0);
}isprint.c       1630754324  501   20    100644  85        `
int ft_isprint (int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return(0);
}
itoa.c          1630758495  501   20    100644  290       `
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
}memchr.c        1630753868  501   20    100644  289       `
#include<stdlib.h>

void *ft_memchr (const void *memoryblock, int searched, size_t size)
{
    while (size > 0)
    {
        if (*(int *)memoryblock == searched)
        {
            return((void *) memoryblock);
        }
        memoryblock++;
        size--;
    }
    return(NULL);
}
memcmp.c        1630758449  501   20    100644  208       `
#include<stdlib.h>

int ft_memcmp (const void *p1, const void *p2, size_t n)
{
	while (n > 0)
	{
		if (*(char *)p1 != *(char *)p2)
			return(*(char *)p1 - *(char *)p2);
		p1++;
		p2++;
		n--;
	}
	return(0);
}memcpy.c        1630753866  501   20    100644  281       `
#include<stdlib.h>

void *ft_memcpy (void *destination, const void *source, size_t size)
{
    size_t i;
    char *d;
    const char *s;

    d = destination;
    s = source;
    i = 0;
    while (i < size)
    {
        d[i] = s [i];
        i++;
    }
    return (destination);
}
memmove.c       1630756574  501   20    100644  277       `
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
memset.c        1630753864  501   20    100644  218       `
#include<stdlib.h>

void *memset (void *pointer, int value, size_t count)
{
	size_t i;
	int *p;
	
	p = pointer;
	i = 0;
	if (!pointer)
		return (0);
	while (i < count)
	{
		p[i] = value;
		i++;
	}
	return (pointer);
}
putchar_fd.c    1630753871  501   20    100644  81        `
#include<unistd.h>

void ft_putchar_fd (char c, int fd)
{
    write(fd, &c, 1);
}
putendl_fd.c    1630753874  501   20    100644  151       `
#include<unistd.h>

void ft_putendl_fd (char *s, int fd)
{
    while (*s)
    {
        write (fd, s, 1);
        s++;
    }
    write (fd, "\n", 1);
}
putnbr_fd.c     1630753875  501   20    100644  365       `
#include<unistd.h>

void ft_putnbr_fd (int n, int fd)
{
    if (n == -2147483648)
        write (fd, "-2147483648", 11);
    else if (n < 0)
    {
        write (fd, "-", 1);
        n = n * (-1);
    }
    if (n > 9)
    {
        ft_putnbr_fd (n / 10, fd);
        ft_putnbr_fd (n % 10, fd);
    }
    else if (n >= 0 && n <= 9)
        write (fd, "48 + n", 1);
}
putstr_fd.c     1630704420  501   20    100777  125       `
#include<unistd.h>

void ft_putstr_fd (char *s, int fd)
{
    while (*s)
    {
        write (fd, s, 1);
        s++;
    }
}
split.c         1630758416  501   20    100644  429       `
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
	return(r);
}
strchr.c        1630704415  501   20    100777  196       `
#include<stdlib.h>

char *ft_strchr (const char *str, int searched)
{
    while (*str)
    {
        if (*str == searched)
            return((char *)str);
        str++;
    }
    return(NULL);
}strdup.c        1630757153  501   20    100777  397       `
#include<stdlib.h>

static size_t ft_strlen (const char *str)
{
	size_t l;
	l = 0;
	while (*str != '\0')
	{
		str++;
		l++;
	}
	return (l);
}

char *ft_strdup (const char *src)
{
    char *r;
    size_t i;

    i = 0;
    r = malloc (ft_strlen(src) + 1);
    if (r == NULL)
        return (NULL);
    while (src[i])
    {
        r[i] = src[i];
        i++;
    }
    r[i] = '\0';
    return(r);
}
striteri.c      1630757380  501   20    100644  132       `
void ft_striteri (char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}strjoin.c       1630704418  501   20    100777  508       `
#include<stdlib.h>

static size_t ft_strlen (const char *str)
{
	size_t l;
	l = 0;
	while (*str != '\0')
	{
		str++;
		l++;
	}
	return (l);
}

char *ft_strjoin (const char *s1, const char *s2)
{
    char *r;
    size_t i;

    i = 0;
    r = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
    if (r == NULL)
        return(NULL);
    while (s1)
    {
        r[i] = *s1;
        s1++;
        i++;
    }
    while (s2)
    {
        r[i] = *s2;
        s2++;
        i++;
    }
    r[i] = '\0';
    return(r);
}strlcat.c       1630757404  501   20    100644  387       `
#include<stdlib.h>

static size_t ft_strlen (const char *str)
{
    size_t i;

    i = 0;
    while (*str)
        i++;
    return(i);
}

int ft_strlcat (char *dest, const char *src, size_t size)
{
    while (dest)
        dest++;
    while (size > 0 && src)
    {
        *dest = *src;
        dest++;
        src++;
        size--;
    }
    return(ft_strlen(dest) + ft_strlen(src));
}
strlcpy.c       1630753880  501   20    100644  230       `
#include<stdlib.h>

int ft_strlcpy (char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    while (size > 1)
    {
        dest[i] = src[i];
        i++;
        size--;
    }
    dest[i] = '\0';
    return(i);
}strlen.c        1630757591  501   20    100644  126       `
#include<stdlib.h>

size_t ft_strlen (const char *str)
{
	size_t l;

	l = 0;
	while (*str)
	{
		str++;
		l++;
	}
	return(l);
}strmapi.c       1630704404  501   20    100777  436       `
#include<unistd.h>
#include<stdlib.h>

static size_t ft_strlen (const char *str)
{
	size_t l;
	l = 0;
	while (*str != '\0')
	{
		str++;
		l++;
	}
	return (l);
}

char *ft_strmapi (const char *str, char (*f)(unsigned int, char))
{
    char *r;
    unsigned int i;

    i = 0;
    r = malloc (sizeof (char) * (ft_strlen(str) + 1));
    while (str[i])
    {
        r[i] = f(i, str[i]);
        i++;
    }
    r[i] = '\0';
    return(r);
}strncmp.c       1630757847  501   20    100644  212       `
#include<stdlib.h>

int ft_strncmp (const char *first, const char *second, size_t len)
{
	while (len > 0)
	{
		if (*first != *second)
			return (*first - *second);
		len--;
		first++;
		second++;
	}
	return(0);
}strnstr.c       1630704405  501   20    100777  341       `
#include<stdlib.h>

char *ft_strnstr (const char *str, const char *searched, size_t n)
{
    size_t i;

    while (str)
    {
        i = 0;
        while (str[i] == searched[i] && i < n)
        {
            i++;
        }
        if (searched[i] == '\0' || i == n)
            return((char *)str);
        str++;
    }
    return(NULL);
}
strrchr.c       1630704406  501   20    100777  277       `
#include<stdlib.h>

char *ft_strrchr (const char *str, int searched)
{
    const char *start;

    start = str;
    while (str)
        str++;
    while (str != start)
    {
        if (*str == searched)
            return((char *)str);
        str--;
    }
    return(NULL);
}
strtrim.c       1630704408  501   20    100777  834       `
#include<stdlib.h>

static size_t ft_strlen (const char *str)
{
	size_t l;
	l = 0;
	while (*str != '\0')
	{
		str++;
		l++;
	}
	return (l);
}

char *ft_strtrim (const char *s1, const char *del)
{
    size_t l;
    size_t i;
    size_t len;
    char *r;

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
    r = malloc(len + 1);
    if (r == NULL)
        return(NULL);
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
        r[i] = *s1;
        s1++;
        i++;
    }
    r = "\0";
    return(r);
}substr.c        1630704414  501   20    100777  299       `
#include<stdlib.h>

char *ft_substr (const char *s, unsigned int start, size_t len)
{
    char *r;
    size_t i;

    i = 0;
    r = malloc (len + 1);
    if (r == NULL)
        return(NULL);
    while (i < len)
    {
        r[i] = s[start + i];
        i++;
    }
    r[i] = '\0';
    return(r);
}
tolower.c       1630758375  501   20    100644  74        `
int ft_tolower (int c)
{
	if (c > 'A' && c < 'Z')
		c += 32;
	return(c);
}toupper.c       1630758382  501   20    100644  75        `
int ft_toupper (int c)
{
	if (c > 'a' && c < 'z')
		c -= 32;
	return (c);
}
