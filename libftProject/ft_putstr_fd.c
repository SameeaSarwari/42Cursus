/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:15:47 by ssarwari          #+#    #+#             */
/*   Updated: 2025/05/26 19:12:53 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}


int main(void)
{
    ft_putstr_fd("Hello, world!\0 lala", 1);
    return (0);
}
/* cc -Wall -Wextra -Werror ft_putstr_fd.c && ./a.out */
