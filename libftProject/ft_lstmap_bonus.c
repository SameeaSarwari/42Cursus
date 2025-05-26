/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:23:31 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:18:12 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (!new_content)
			return (ft_lstclear(&new_list, del), NULL);
		new_node = ft_lstnew(new_content);
		if (!new_node)
			return (del(new_content), ft_lstclear(&new_list, del), NULL);
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/* 
void	*to_upper(void *content)
{
	char	*str = (char *)content;
	for (int i = 0; str[i]; i++)
		str[i] = (char)toupper(str[i]);
	return (str);
}

int	main(void)
{
	t_list *node1 = ft_lstnew(strdup("first"));
	t_list *node2 = ft_lstnew(strdup("second"));
	t_list *node3 = ft_lstnew(strdup("third"));

	node1->next = node2;
	node2->next = node3;

	t_list *new_list = ft_lstmap(node1, to_upper);

	t_list *current = new_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstclear(&new_list);
	free(node1->content);
	free(node1);
	free(node2->content);
	free(node2);
	free(node3->content);
	free(node3);

	return (0);
} */
/* cc -Wall -Wextra -Werror ft_lstmap_bonus.c ft_lstnew_bonus.c 
ft_lstclear_bonus.c ft_lstadd_back_bonus.c && ./a.out */
