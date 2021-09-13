/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:39:12 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:25:59 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

static void	ft_bzero(void *s, size_t n)
{
	while (0 < n)
	{
		*(char *)s = '\0';
		n--;
		s++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	r = malloc (count * size);
	if (r == NULL)
		return (NULL);
	ft_bzero (r, count * size);
	return (r);
}
