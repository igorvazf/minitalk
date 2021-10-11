/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_u.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:00:59 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/31 16:14:08 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_u(t_format *fmt, t_holder *holder, char *base)
{
	unsigned int	nbr;
	char			*ptr;

	nbr = (unsigned int)va_arg(fmt->args, unsigned int);
	ptr = ft_itoa_base(nbr, base);
	holder->argument = ft_strdup(ptr);
	free(ptr);
	holder->len = ft_strlen(holder->argument);
}
