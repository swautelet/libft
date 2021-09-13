/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:42:04 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:56:29 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

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
