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