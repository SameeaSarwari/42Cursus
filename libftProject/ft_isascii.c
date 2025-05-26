/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:56:52 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:33:50 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* 
int	main(void)
{
	int vals[] = {65, 127, 128, -1, 0, 32};

	printf("%d: %d\n", vals[0], ft_isascii(vals[0]));
	printf("%d: %d\n", vals[1], ft_isascii(vals[1]));
	printf("%d: %d\n", vals[2], ft_isascii(vals[2]));
	printf("%d: %d\n", vals[3], ft_isascii(vals[3]));
	printf("%d: %d\n", vals[4], ft_isascii(vals[4]));
	printf("%d: %d\n", vals[5], ft_isascii(vals[5]));

	return 0;
} */
/* cc -Wall -Wextra -Werror ft_isascii.c && ./a.out */
