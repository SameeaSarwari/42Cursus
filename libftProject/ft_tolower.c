/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:59:36 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 18:05:52 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/* 
int main(void)
{
    char c = 'A';
    printf("Original: %c, To Lower: %c\n", c, ft_tolower(c));

    c = 'z';
    printf("Original: %c, To Lower: %c\n", c, ft_tolower(c));

    return 0;
} */
/*cc -Wall -Wextra -Werror ft_tolower.c && ./a.out*/
