/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:06:52 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:19:14 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* 
int	main(void)
{
	t_list *node;
	node = ft_lstnew("Whtaever");

	if (node)
	{
		printf("Content: %s\n", (char *)node->content);
		printf("Next: %p\n", node->next);
		free(node);
	}
	return (0);
} */
/*cc -Wall -Wextra -Werror ft_lstnew_bonus.c && ./a.out*/
