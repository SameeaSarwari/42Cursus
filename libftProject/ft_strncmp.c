/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:07:41 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:57:40 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)(s2[i]))
			return ((unsigned char)s1[i] - (unsigned char)(s2[i]));
		i++;
	}
	return (0);
}

/* 
int main(void)
{
	printf("%d\n", ft_strncmp("abc", "abd", 3)); // Output should be negative
	return (0);
} */
/*cc -Wall -Wextra -Werror ft_strncmp.c && ./a.out*/
