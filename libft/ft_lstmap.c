/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:42:55 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/23 14:40:42 by mrazakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*iter;
	t_list	*new_list_iter;

	if (!lst || !f || !del)
		return (NULL);
	iter = lst;
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	new_list_iter = new_list;
	while (iter->next)
	{
		iter = iter->next;
		new_list_iter->next = ft_lstnew(f(iter->content));
		new_list_iter = new_list_iter->next;
		if (!new_list_iter)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
	}
	return (new_list);
}
