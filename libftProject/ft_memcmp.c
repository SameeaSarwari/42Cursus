/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:25:13 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:24:54 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/* 
int	main(void)
{
	char *s1 = "KaixoSamiKhan";
	char *s2 = "KaixoSamiKhai";
	int r = ft_memcmp(s1, s2, 15);

	printf("Result: %d\n", r);
	return 0;
} */
/* cc -Wall -Wextra -Werror ft_memcmp.c && ./a.out */
