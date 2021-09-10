/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:43:20 by swautele          #+#    #+#             */
/*   Updated: 2021/09/10 15:43:21 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strrchr(const char *str, int searched)
{
	const char	*start;

	start = str;
	while (*str)
		str++;
	while (str != start)
	{
		if (*str == searched)
			return ((char *)str);
		str--;
	}
	return (NULL);
}
