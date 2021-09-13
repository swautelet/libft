/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swautele <swautele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 15:39:19 by swautele          #+#    #+#             */
/*   Updated: 2021/09/13 13:26:01 by swautele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

static int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha (c) == 1 || ft_isdigit (c) == 1)
		return (1);
	else
		return (0);
}
