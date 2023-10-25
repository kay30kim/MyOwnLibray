/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyung-ki <kyung-ki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:35:19 by kyung-ki          #+#    #+#             */
/*   Updated: 2023/10/25 12:10:49 by kyung-ki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*ptr;
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (0);
	ptr = head;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		ptr->next = tmp;
		ptr = tmp;
		lst = lst->next;
	}
	return (head);
}
