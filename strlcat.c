/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:42:34 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:28:12 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	while (*dest)
		dest++;
	while (size > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	return (ft_strlen(dest) + ft_strlen(src));
}
