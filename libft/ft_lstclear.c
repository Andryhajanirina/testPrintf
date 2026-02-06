/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrazakam <mrazakam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:28:58 by mrazakam          #+#    #+#             */
/*   Updated: 2026/01/23 14:37:59 by mrazakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iter;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	iter = *lst;
	while (iter)
	{
		tmp = iter;
		iter = iter->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}
