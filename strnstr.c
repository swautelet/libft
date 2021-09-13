/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:43:13 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:28:35 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

char	*ft_strnstr(const char *str, const char *searched, size_t n)
{
	size_t	i;

	while (str)
	{
		i = 0;
		while (str[i] == searched[i] && i < n)
		{
			i++;
		}
		if (searched[i] == '\0' || i == n)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
