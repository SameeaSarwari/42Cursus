/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:55:43 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:24:12 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/* 
int	main(void)
{
	char t[] = {'A', '7', '@', 'z', ' ', '\n', '0'};

	printf("%c: %d\n", t[0], ft_isalnum(t[0]));
	printf("%c: %d\n", t[1], ft_isalnum(t[1]));
	printf("%c: %d\n", t[2], ft_isalnum(t[2]));
	printf("%c: %d\n", t[3], ft_isalnum(t[3]));
	printf("%c: %d\n", t[4], ft_isalnum(t[4]));
	printf("%c: %d\n", t[5], ft_isalnum(t[5]));
	printf("%c: %d\n", t[6], ft_isalnum(t[6]));

	return 0;
} */
/* cc -Wall -Wextra -Werror ft_isalpha.c ft_isdigit.c ft_isalnum.c && ./a.out
*/
