/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:00:13 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/31 10:00:19 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_c(t_format *fmt, t_holder *holder)
{
	char	ch;

	ch = (wint_t)va_arg(fmt->args, wint_t);
	holder->argument = malloc(sizeof(char));
	if (!holder->argument)
		return ;
	holder->argument[0] = ch;
	holder->len++;
}
