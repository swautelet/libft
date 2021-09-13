/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:42:27 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:56:42 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*r;
	size_t	i;

	i = 0;
	r = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (r == NULL)
		return (NULL);
	while (s1)
	{
		r[i] = *s1;
		s1++;
		i++;
	}
	while (s2)
	{
		r[i] = *s2;
		s2++;
		i++;
	}
	r[i] = '\0';
	return (r);
}
