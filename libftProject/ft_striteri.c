/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:03:33 by ssarwari          #+#    #+#             */
/*   Updated: 2025/04/27 17:41:50 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* 
void	to_upper(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = (*c >= 'a' && *c <= 'z') ? *c - 32 : *c;
}
int main(void)
{
    char str[] = "hello world";
    
    ft_striteri(str, to_upper);
    
    printf("%s\n", str);
    
    return 0;
} */
/* cc -Wall -Wextra -Werror ft_striteri.c && ./a.out */
