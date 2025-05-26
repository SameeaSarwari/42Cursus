/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:03:55 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:43:45 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* 
int	main(void)
{
	t_list *node1 = ft_lstnew("World");
	t_list *node2 = ft_lstnew("Hello");

	ft_lstadd_front(&node1, node2);

	printf("1st: %s\n", (char *)node1->content);
	printf("2nd: %s\n", (char *)node1->next->content);

	free(node1->next);
	free(node1);
	return (0);
} */
/* cc -Wall -Wextra -Werror ft_lstadd_front_bonus.c ft_lstnew_bonus.c && ./a.out
 */
