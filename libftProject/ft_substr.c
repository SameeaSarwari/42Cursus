/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:08:54 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 18:04:54 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/* 
int main(void)
{
    char *substr = ft_substr("Hello, world!", 7, 5);
    printf("%s\n", substr ? substr : "NULL");
    free(substr);
    return 0;
} */
/*cc -Wall -Wextra -Werror ft_substr.c ft_strlen.c ft_strdup.c ft_calloc.c
 ft_bzero.c -o ft_substr_program && ./ft_substr_program ./a.out*/