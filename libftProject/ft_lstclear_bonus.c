/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:18:17 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 18:09:53 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/*
void	del_content(void *content)
{
	free(content);
}


int	main(void)
{
	t_list *node1 = ft_lstnew(strdup("First"));
	t_list *node2 = ft_lstnew(strdup("Second"));
	t_list *node3 = ft_lstnew(strdup("Third"));

	node1->next = node2;
	node2->next = node3;

	ft_lstclear(&node1, del_content);

	if (!node1)
		printf("List cleared successfully.\n");

	return (0);
} */
/*cc -Wall -Wextra -Werror ft_lstclear_bonus.c ft_lstdelone_bonus.c
 ft_lstnew_bonus.c && ./a.out */