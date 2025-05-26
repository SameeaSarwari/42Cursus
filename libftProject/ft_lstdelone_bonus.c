/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:14:25 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:51:49 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* 
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	char *str = strdup("To be deleted");
	t_list *node = ft_lstnew(str);

	ft_lstdelone(node, del_content);

	printf("Node deleted successfully.\n");
	return (0);
} */
/* cc -Wall -Wextra -Werror ft_lstdelone_bonus.c ft_lstnew_bonus.c && ./a.out
 */