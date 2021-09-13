/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:43:26 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:57:21 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_len(const char *s1, const char *del)
{
	size_t	len;
	size_t	i;
	size_t	l;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i])
	{
		l = 0;
		while (del[l])
		{
			if (s1[i] == del[l])
				len = len - 1;
			l++;
		}
		i++;
	}
	return (len);
}

char	*ft_strtrim(const char *s1, const char *del)
{
	size_t	l;
	size_t	i;
	size_t	len;
	char	*r;

	len = ft_len(s1, del);
	r = malloc(len + 1);
	if (r == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		l = -1;
		while (del[l++])
		{
			if (*s1 == del[l])
			{
				s1++;
				l = -1;
			}
		}
		r[i++] = *s1++;
	}
	r = "\0";
	return (r);
}
