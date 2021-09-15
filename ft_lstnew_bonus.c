/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 22:18:12 by swautele          #+#    #+#             */
/*   Updated: 2021/09/15 22:36:58 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list	*new;
	
	new = malloc (sizeof (t_list));
	if (new == NULL)
		return (NULL);
	(*new).content = content;
	(*new).next = NULL;
	return (new);
}