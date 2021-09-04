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