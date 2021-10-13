/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:07:22 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/13 14:35:35 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

static void	receive_confirmation(int signum)
{
	if (signum == SIGUSR1)
	{
		ft_printf("Signal received!\n");
		exit(0);
	}
}

static void	decimal_conversion(unsigned char c, int flip_counter, int pid)
{
	if (flip_counter > 0)
		decimal_conversion(c / 2, flip_counter - 1, pid);
	if ((c % 2) == 1)
	{
		if (kill(pid, SIGUSR1) != 0)
		{
			ft_printf("Error signal!\n");
			exit(1);
		}
	}
	else
	{
		if (kill(pid, SIGUSR2) != 0)
		{
			ft_printf("Error signal!\n");
			exit(1);
		}
	}
	usleep(200);
}

static void	send_message(int server_pid, char *message)
{
	int	i;

	i = 0;
	while (message[i])
	{
		decimal_conversion((unsigned char)message[i], 7, server_pid);
		i++;
	}
	decimal_conversion('\n', 7, server_pid);
	decimal_conversion(message[i], 7, server_pid);
}

int	main(int argc, char *argv[])
{
	pid_t	pid;

	if (argc != 3)
	{
		ft_printf("Invalid format. Try: ./client + PID + Message\n");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (pid <= 1)
	{
		ft_printf("Invalid PID.\n");
		return (1);
	}
	signal(SIGUSR1, receive_confirmation);
	send_message(pid, argv[2]);
	while (1)
		pause();
	return (0);
}
