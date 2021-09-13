/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:41:57 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 19:49:49 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static void	ft_free(char **r, int l)
{
	while (l >= 0)
	{
		free(r[l]);
		l--;
	}
}

static size_t	ft_count(const char *str, const char c)
{
	size_t	l;

	l = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str != c && *str)
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
	if (!str)
		return (0);
	r = ft_calloc (sizeof(char *), ft_count(str, c) + 1);
	if (r == NULL)
		return (NULL);
	while (*str)
	{
		while (*str == c)
			str++;
		if (!*str)
			break ;
		i = 0;
		l++;
		r[l] = ft_calloc (sizeof(char), (ft_len(str, c)));
		if (r[l] == NULL)
		{
			ft_free(r, l);
			return (NULL);
		}
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
