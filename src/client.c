/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:07:22 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/11 15:52:34 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

int	main(int argc, char *argv[])
{
	pid_t	pid;

	if (argc != 3)
	{
		ft_printf("Invalid format. Try: ./client + PID + Message\n");
		return (1);
	}
	else
	{
		pid = ft_atoi(argv[1]);
		if (pid <= 1)
		{
			ft_printf("Invalid PID.\n");
			return (1);
		}
		kill(pid, SIGUSR1);
	}
	return (0);
}
