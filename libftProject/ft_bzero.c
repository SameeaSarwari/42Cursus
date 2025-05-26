/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:13:07 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 16:26:44 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/* 
int main(void)
{
    char str1[] = "Kaixo";  // For ft_bzero
    char str2[] = "Kaixo";  // For original memset

    // Print before modification
    printf("Before: %s\n", str1);

    // Use ft_bzero (your implementation)
    ft_bzero(str1, 3);

    // Use memset (original function) to mimic bzero
    memset(str2, 0, 3);

    // Print results after modification
    printf("After ft_bzero: %s\n", str1);
    printf("After memset: %s\n", str2);

    // Check if both results are the same
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
/* cc -Wall -Wextra -Werror ft_bzero.c && ./a.out */
