/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:00:51 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/31 14:59:04 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include <stdio.h>

static char	*ft_strdup_verification(const char *s)
{
	if (!s)
		return (NULL);
	return (ft_strdup(s));
}

void	ft_convert_s(t_format *fmt, t_holder *holder)
{
	char	*str;

	str = ft_strdup_verification(va_arg(fmt->args, char *));
	if (!str)
		str = ft_strdup("(null)");
	holder->argument = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!holder->argument)
		return ;
	ft_strlcpy(holder->argument, str, ft_strlen(str) + 1);
	holder->len = ft_strlen(holder->argument);
	free(str);
}
