/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:41:35 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/31 11:25:57 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_vprintf(va_list args, const char *format)
{
	int			len;
	t_format	*fmt;

	fmt = ft_init_format(args, format);
	while (fmt->format[fmt->i])
	{
		if (fmt->format[fmt->i] == '%')
			ft_placeholder(fmt);
		else
		{
			fmt->len += write(1, &fmt->format[fmt->i], 1);
			fmt->i++;
		}
	}
	len = fmt->len;
	free(fmt);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = ft_vprintf(args, format);
	va_end(args);
	return (len);
}
