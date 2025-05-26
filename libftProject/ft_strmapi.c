/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 17:49:22 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:56:28 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* 
char	to_upper(unsigned int i, char c)
{
	return (i % 2 == 0 && c >= 'a' && c <= 'z') ? (c - 32) : c;
}

int main(void)
{
	char *result = ft_strmapi("hello world", to_upper);
	printf("%s\n", result ? result : "Memory allocation failed");
	free(result);
	return 0;
} */
/*cc -Wall -Wextra -Werror ft_strmapi.c ft_strlen.c -o
 ft_strmapi_program && ./ft_strmapi_program ./a.out*/
