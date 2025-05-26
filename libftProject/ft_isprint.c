/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:10:29 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:36:23 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/* 
int	main(void)
{
	int a = 31, b = 32, c = 65, d = 126, e = 127;

	printf("ASCII %d is %sprintable\n", a, ft_isprint(a) ? "" : "not ");
	printf("ASCII %d is %sprintable\n", b, ft_isprint(b) ? "" : "not ");
	printf("ASCII %d is %sprintable\n", c, ft_isprint(c) ? "" : "not ");
	printf("ASCII %d is %sprintable\n", d, ft_isprint(d) ? "" : "not ");
	printf("ASCII %d is %sprintable\n", e, ft_isprint(e) ? "" : "not ");

	return (0);
} */
/* cc -Wall -Wextra -Werror ft_isprint.c && ./a.out */