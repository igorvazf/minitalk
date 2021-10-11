/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_d_i.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:00:24 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/31 14:35:34 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_d_i(t_format *fmt, t_holder *holder)
{
	int	arg;

	arg = va_arg(fmt->args, int);
	holder->argument = ft_itoa(arg);
	holder->len = ft_strlen(holder->argument);
}
