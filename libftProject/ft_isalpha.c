/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:53:37 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:29:36 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/* 
int	main(void)
{
	char test0 = 'A';
	char test1 = 'g';
	char test2 = 'Z';
	char test3 = '3';
	char test4 = '%';
	char test5 = 'm';

	printf("ft_isalpha('%c') = %d\n", test0, ft_isalpha(test0));
	printf("ft_isalpha('%c') = %d\n", test1, ft_isalpha(test1));
	printf("ft_isalpha('%c') = %d\n", test2, ft_isalpha(test2));
	printf("ft_isalpha('%c') = %d\n", test3, ft_isalpha(test3));
	printf("ft_isalpha('%c') = %d\n", test4, ft_isalpha(test4));
	printf("ft_isalpha('%c') = %d\n", test5, ft_isalpha(test5));

	return 0;
} */
/* cc -Wall -Wextra -Werror ft_isalpha.c && ./a.out */
