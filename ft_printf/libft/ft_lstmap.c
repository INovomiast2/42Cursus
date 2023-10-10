/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivnovomi <ivnovomi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:55:38 by ivnovomi          #+#    #+#             */
/*   Updated: 2023/10/06 00:40:42 by ivnovomi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*e;

	if (!lst)
		return (NULL);
	new_l = NULL;
	while (lst)
	{
		e = ft_lstnew(f(lst->content));
		if (!e)
		{
			del(new_l);
			ft_lstclear(&new_l, del);
			return (0);
		}
		ft_lstadd_back(&new_l, e);
		lst = lst->next;
	}
	return (new_l);
}
