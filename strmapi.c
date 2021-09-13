/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:42:56 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:28:27 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include"libft.h"

static size_t	ft_strlen(const char *str)
{
	size_t	l;

	l = 0;
	while (*str != '\0')
	{
		str++;
		l++;
	}
	return (l);
}

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char			*r;
	unsigned int	i;

	i = 0;
	r = malloc (sizeof (char) * (ft_strlen(str) + 1));
	if (r == NULL)
		return (NULL);
	while (str[i])
	{
		r[i] = f(i, str[i]);
		i++;
	}
	r[i] = '\0';
	return (r);
}
