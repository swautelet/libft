/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonwautelet <simonwautelet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:43:13 by swautele          #+#    #+#             */
/*   Updated: 2021/09/30 19:42:31 by simonwautel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str, const char *searched, size_t n)
{
	size_t	i;

	if (str == searched)
		return ((char *)str);
	while (*str && n-- > 0)
	{
		i = 0;
		while (str[i] == searched[i] && n - i > 1)
		{
			i++;
		}
		if (searched[i] == '\0')
			return ((char *)str);
		str++;
	}
	return (NULL);
}
