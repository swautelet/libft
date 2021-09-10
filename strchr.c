/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:42:04 by swautele          #+#    #+#             */
/*   Updated: 2021/09/10 15:42:05 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strchr(const char *str, int searched)
{
	while (*str)
	{
		if (*str == searched)
			return ((char *)str);
		str++;
	}
	if (searched == '\0')
		return ((char *)str);
	return (NULL);
}
