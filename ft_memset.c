/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simonwautelet <simonwautelet@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:41:21 by swautele          #+#    #+#             */
/*   Updated: 2021/10/01 20:13:52 by simonwautel      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t				i;
	unsigned char		*p;

	p = pointer;
	i = 0;
	if (pointer == NULL)
		return (NULL);
	while (i < count)
	{
		p[i] = value;
		i++;
	}
	return (pointer);
}
