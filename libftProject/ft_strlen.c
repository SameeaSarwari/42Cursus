/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:07:25 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 15:37:28 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
 int main (void)
{
	char *test = {"teststreing"};
	int res = 0;
	
	res = ft_strlen(test);
	printf("%d\n", res);
	
	int res2 = strlen(test);
	printf("%d", res2);
	return (0);
} */
/* cc -Wall -Wextra -Werror ft_strlen.c && ./a.out */
