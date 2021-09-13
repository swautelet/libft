/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:38:37 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:25:56 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	r;

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
	return (r * s);
}
