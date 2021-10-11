/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:01:10 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/31 15:41:14 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_ux(t_format *fmt, t_holder *holder)
{
	unsigned int	ptr;
	char			*address;

	ptr = (unsigned int)va_arg(fmt->args, unsigned int);
	if (!ptr)
		ptr = 0;
	address = ft_itoa_base(ptr, HEXA_U_BASE);
	holder->argument = ft_strdup(address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}

void	ft_convert_x(t_format *fmt, t_holder *holder)
{
	unsigned int	ptr;
	char			*address;

	ptr = (unsigned int)va_arg(fmt->args, unsigned int);
	if (!ptr)
		ptr = 0;
	address = ft_itoa_base(ptr, HEXA_L_BASE);
	holder->argument = ft_strdup(address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}
