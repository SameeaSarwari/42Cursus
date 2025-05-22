/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssarwari <ssarwari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 11:28:55 by ssarwari          #+#    #+#             */
/*   Updated: 2025/05/14 12:59:15 by ssarwari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_conversion(char spec, va_list args)
{
	if (spec == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (spec == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (spec == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (spec == 'd' || spec == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (spec == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (spec == 'x' || spec == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), spec));
	else if (spec == '%')
		return (ft_print_percent());
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			len += handle_conversion(format[i], args);
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
		i++;
	}
	va_end(args);
	return (len);
}

/* 
int main(void)
{
    int count;

    count = ft_printf("Character: %c\n", 'A');
    ft_printf("Printed %d characters.\n\n", count);

    count = ft_printf("String: %s\n", "Hello, 42!");
    ft_printf("Printed %d characters.\n\n", count);

    count = ft_printf("Pointer: %p\n", (void *)0x12345678);
    ft_printf("Printed %d characters.\n\n", count);

    count = ft_printf("Decimal: %d, Integer: %i\n", 42, -42);
    ft_printf("Printed %d characters.\n\n", count);

    count = ft_printf("Unsigned: %u\n", 3000000000U);
    ft_printf("Printed %d characters.\n\n", count);

    count = ft_printf("Hex lowercase: %x\n", 255);
    ft_printf("Printed %d characters.\n\n", count);

    count = ft_printf("Hex uppercase: %X\n", 255);
    ft_printf("Printed %d characters.\n\n", count);

    count = ft_printf("Percent sign: %%\n");
    ft_printf("Printed %d characters.\n\n", count);

    return 0;
} */