/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:43:20 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:28:39 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

char	*ft_strrchr(const char *str, int searched)
{
	const char	*start;

	start = str;
	while (*str)
		str++;
	while (str >= start)
	{
		if (*str == searched)
			return ((char *)str);
		str--;
	}
	return (NULL);
}
