/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:54:45 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:35:13 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/* 
int main(void)
{
	char test[] = {'0', '5', '9', 'a', '-', '3'};
	int i;

	for (i = 0; i < 6; i++)
	{
		printf("ft_isdigit('%c') = %d\n", test[i], ft_isdigit(test[i]));
	}

	return 0;
} */
/* cc -Wall -Wextra -Werror ft_isdigit.c && ./a.out */
