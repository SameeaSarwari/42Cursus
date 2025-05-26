/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:17:09 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:53:50 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/* 
int	main(void)
{
	char	*d;
	int		i;

	d = (char *)malloc(20 * sizeof(char));
	if (d == NULL)
	{
		write(1, "Memory allocation failed\n", 26);
		return (1);
	}
	i = 0;
	while (i < 19)
	{
		d[i] = 'A';
		i++;
	}
	d[i] = '\0';

	printf("String original: %s\n", d);
	printf("Valor retornado: %zu\n", ft_strlcpy(d, "123456789", 3));
	printf("String final: %s\n", d);

	free(d);
	return (0);
} */
/* cc -Wall -Wextra -Werror ft_strlcpy.c ft_strlen.c -o
 ft_strlcpy_program && ./ft_strlcpy_program ./a.out */
