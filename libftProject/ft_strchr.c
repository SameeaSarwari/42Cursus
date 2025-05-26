/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:26:04 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:40:01 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* 
int	main(void)
{
	char *s = "Hello, world!";
	char *res = ft_strchr(s, 'o');

	printf("%s\n", res ? res : "Not found");
	return 0;
} */
/* cc -Wall -Wextra -Werror ft_strchr.c && ./a.out */
