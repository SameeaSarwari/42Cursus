/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:05:49 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:02:41 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* 
int main(void)
{
    char str1[20] = "HelloWorld";  // For ft_memset
    char str2[20] = "HelloWorld";  // For original memset

    // Use ft_memset (your implementation)
    ft_memset(str1 + 5, '*', 3);
    
    // Use standard memset (original implementation)
    memset(str2 + 5, '*', 3);

    // Compare the results
    printf("ft_memset Result: %s\n", str1);
    printf("Original memset Result: %s\n", str2);

    // Check if both are the same
    if (strcmp(str1, str2) == 0)
    {
        printf("The results are the same!\n");
    }
    else
    {
        printf("The results are different.\n");
    }

    return 0;
} */
/* cc -Wall -Wextra -Werror ft_memset.c && ./a.out */