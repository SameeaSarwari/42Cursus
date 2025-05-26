/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:06:44 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:46:29 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = ft_calloc(len1 + len2 + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1, len1);
	ft_memcpy(res + len1, s2, len2);
	return (res);
}
/* 
int	main(void)
{
	char	*result = ft_strjoin("HOLA", " MUNDO");

	if (!result)
		return (1);

	while (*result)
	{
		write(1, result, 1);
		result++;
	}
	write(1, "\n", 1);
	return (0);
} */
/*cc -Wall -Wextra -Werror ft_strjoin.c ft_strlen.c ft_calloc.c ft_memcpy.c
 ft_bzero.c -o ft_strjoin_program && ./ft_strjoin_program */
