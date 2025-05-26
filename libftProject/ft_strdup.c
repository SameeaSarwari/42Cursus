/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:29:22 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:41:07 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t	length;
	size_t	i;

	length = 0;
	while (str[length])
		length++;
	dest = (char *)malloc(length + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/* 
int	main(void)
{
	char *copy = ft_strdup("Hello!");
	printf("%s\n", copy);
	free(copy);
	return 0;
} */
/* cc -Wall -Wextra -Werror ft_strdup.c && ./a.out */
