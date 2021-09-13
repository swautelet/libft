/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:41:21 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:55:57 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*memset(void *pointer, int value, size_t count)
{
	size_t	i;
	int		*p;

	p = pointer;
	i = 0;
	if (!pointer)
		return (0);
	while (i < count)
	{
		p[i] = value;
		i++;
	}
	return (pointer);
}