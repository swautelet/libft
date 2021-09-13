/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:43:07 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:28:31 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include"libft.h"

int	ft_strncmp(const char *first, const char *second, size_t len)
{
	while (len > 1 && *first && *second && *first == *second)
	{
		len--;
		first++;
		second++;
	}
	return (*(unsigned char *)first - *(unsigned char *)second);
}
