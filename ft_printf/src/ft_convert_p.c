/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:00:33 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/31 14:31:24 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_p(t_format *fmt, t_holder *holder)
{
	void	*ptr;
	char	*address;

	ptr = va_arg(fmt->args, void *);
	if (!ptr)
		ptr = 0;
	address = ft_itoa_base((unsigned long)ptr, HEXA_L_BASE);
	holder->argument = ft_strjoin(HEX_L_PREFIX, address);
	free(address);
	holder->len = ft_strlen(holder->argument);
}
