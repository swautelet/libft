/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:41:57 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:56:25 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_count(const char *str, const char c)
{
	size_t	l;

	l = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str != c)
			l++;
		while (*str && *str != c)
			str++;
	}
	return (l);
}

static int	ft_len(const char *str, const char c)
{
	int	d;

	d = 0;
	while (*str && *str != c)
	{
		d++;
		str++;
	}
	return (d);
}

char	**ft_split(const char *str, char c)
{
	char	**r;
	size_t	i;
	size_t	l;

	l = -1;
	r = malloc (sizeof(char *) * ft_count(str, c));
	if (r == NULL)
		return (NULL);
	while (*str)
	{
		while (*str == c)
			str++;
		i = 0;
		l++;
		r[l] = malloc (sizeof(char) * (1 + ft_len(str, c)));
		while (*str && *str != c)
		{
			r[l][i] = *str;
			str++;
			i++;
		}
		if (*str == c || *str == '\0')
			r[l][i] = '\0';
	}
	return (r);
}
