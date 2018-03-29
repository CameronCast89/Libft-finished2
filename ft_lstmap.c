/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccastill <ccastill@42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 01:21:29 by ccastill          #+#    #+#             */
/*   Updated: 2018/03/27 01:21:30 by ccastill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*head;
	t_list	*elem;

	elem = f(lst);
	if (!(new_lst = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	head = new_lst;
	lst = lst->next;
	while (lst)
	{
		elem = f(lst);
		if (!(new_lst->next = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (head);
}
