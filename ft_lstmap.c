/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 12:59:04 by swautele          #+#    #+#             */
/*   Updated: 2021/09/27 15:12:02 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*in;

	if (!lst || !*f)
		return (NULL);
	;
	if (!(new = ft_lstnew((*f)(lst->content))))
	{
		ft_lstclear(&new, del);
		return (NULL);
	}
	while (lst->next)
	{
		lst = lst->next;
		in = ft_lstnew(f(lst->content));
		if (!in)
		{
			ft_lstclear(&new, del);
			ft_lstclear(&in, del);
			return (NULL);
		}
		ft_lstadd_back(&new, in);
	}
	in = ft_lstnew(f(lst->content));
	if (!in)
	{
		ft_lstclear(&new, del);
		ft_lstclear(&in, del);
		return (NULL);
	}
	ft_lstadd_back(&new, in);
	return (new);
}
