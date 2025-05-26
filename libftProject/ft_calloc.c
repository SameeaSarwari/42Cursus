/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:28:23 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:28:17 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/* 
 int	 	main(void)
{
	int	*arr = ft_calloc(5, sizeof(int));
	
	for (int i = 0; i < 5; i++)
	printf("%d", arr[i]);
	printf("\n");
	free(arr);
	return (0);
} */
/* cc -Wall -Wextra -Werror ft_calloc.c ft_bzero.c && ./a.out */
