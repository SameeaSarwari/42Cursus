/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:45:01 by ssarwari          #+#    #+#             */
/*   Updated: 2025/05/08 19:29:14 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
		str = "(null)";
	while (str[len])
		write(1, &str[len++], 1);
	return (len);
}

/* 
int main(void)
{
	ft_print_str("Hello, World!");
	ft_print_str("\n");
	ft_print_str(NULL);
} */
