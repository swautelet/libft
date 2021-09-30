/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonwautelet <simonwautelet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:43:32 by swautele          #+#    #+#             */
/*   Updated: 2021/09/30 19:31:35 by simonwautel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	r = malloc (len + 1);
	if (r == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len)
		{
			r[i] = s[start + i];
			i++;
		}
	}
	r[i] = '\0';
	return (r);
}
