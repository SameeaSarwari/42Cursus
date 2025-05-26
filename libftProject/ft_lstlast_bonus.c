/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:09:24 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:07:38 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* 
int	main(void)
{
	t_list *n1 = ft_lstnew("First");
	t_list *n2 = ft_lstnew("Second");
	t_list *n3 = ft_lstnew("Last");

	ft_lstadd_front(&n2, n1);
	ft_lstadd_front(&n3, n2);

	t_list *last = ft_lstlast(n3);
	if (last)
		printf("Last node content: %s\n", (char *)last->content);

	free(n1);
	free(n2);
	free(n3);
	return (0);
} */
/* cc -Wall -Wextra -Werror ft_lstlast_bonus.c ft_lstnew_bonus.c 
ft_lstadd_front_bonus.c && ./a.out */
