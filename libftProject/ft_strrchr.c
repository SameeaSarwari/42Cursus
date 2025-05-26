/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:08:14 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:59:17 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}

/* 
int	main(void)
{
	char *result = ft_strrchr("Hello, world!", 'o');
	printf("%s\n", result ? result : "Not found");
	return 0;
} */
/*cc -Wall -Wextra -Werror ft_strrchr.c && ./a.out*/
