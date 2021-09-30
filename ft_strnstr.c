/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonwautelet <simonwautelet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:43:13 by swautele          #+#    #+#             */
/*   Updated: 2021/09/30 22:57:26 by simonwautel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str, const char *searched, size_t n)
{
	size_t	i;

	if (str == searched)
		return ((char *)str);
	if (n == 0)
		return (NULL);
	while (*str && n - ft_strlen(searched) >= 0)
	{
		i = 0;
		while (str[i] == searched[i] && searched[i] && n - i > 0)
		{
			i++;
		}
		if (searched[i] == '\0')
			return ((char *)str);
		str++;
		n--;
	}
	return (NULL);
}
