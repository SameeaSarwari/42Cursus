/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:07:03 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:50:16 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (src[i] && (dst_len + i < dstsize - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/* 
int	main(void)
{
	char buffer[20] = "Hello";
	const char *src = " World!";
	size_t total_len;

	total_len = ft_strlcat(buffer, src, sizeof(buffer));

	printf("Result: %s\n", buffer);
	printf("Total length tried to create: %zu\n", total_len);

	return 0;
} */
/* cc -Wall -Wextra -Werror ft_strlcat.c ft_strlen.c -o
 ft_strlcat_program && ./ft_strlcat_program */
