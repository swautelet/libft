/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:41:41 by swautele          #+#    #+#             */
/*   Updated: 2021/09/10 15:41:42 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 12);
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
		ft_putchar_fd(48 + n, fd);
}
