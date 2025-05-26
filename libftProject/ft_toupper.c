/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:09:32 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 18:06:25 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/* 
int main(void)
{
    char c = 'a';
    printf("Original: %c, To Upper: %c\n", c, ft_toupper(c));

    c = 'Z';
    printf("Original: %c, To Upper: %c\n", c, ft_toupper(c));

    return 0;
} */
/*cc -Wall -Wextra -Werror ft_toupper.c && ./a.out*/
