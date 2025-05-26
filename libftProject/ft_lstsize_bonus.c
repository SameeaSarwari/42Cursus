/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:06:04 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:22:33 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* 
int	main(void)
{
	t_list *n1 = ft_lstnew("One");
	t_list *n2 = ft_lstnew("Two");
	t_list *n3 = ft_lstnew("Three");

	ft_lstadd_front(&n2, n1);
	ft_lstadd_front(&n3, n2);

	printf("List size: %d\n", ft_lstsize(n3));

	free(n1);
	free(n2);
	free(n3);
	return (0);
} */
/* cc -Wall -Wextra -Werror ft_lstsize_bonus.c && ./a.out */
