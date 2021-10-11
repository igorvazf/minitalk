/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:00:43 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/31 10:00:45 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_convert_pct(t_holder *holder)
{
	char	ch;

	ch = '%';
	holder->argument = malloc(sizeof(char));
	if (!holder->argument)
		return ;
	holder->argument[0] = ch;
	holder->len++;
}
