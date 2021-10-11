/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:07:41 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/11 23:32:07 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

static void	receive_message(int signum, siginfo_t *siginfo, void *unused)
{
	static int	ascii = 0;
	static int	flip_counter = 0;

	(void)unused;
	if (signum == SIGUSR1)
		ascii += 1 << (7 - flip_counter);
	flip_counter++;
	if (flip_counter == 8)
	{
		ft_printf("%c", ascii);
		flip_counter = 0;
		if (ascii == '\0')
			if (kill(siginfo->si_pid, SIGUSR1) != 0)
				ft_printf("Error signal!\n");
		ascii = 0;
	}
}

int	main(void)
{
	struct sigaction	act;
	pid_t				pid;

	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = receive_message;
	pid = getpid();
	ft_printf("Server PID: %d\n", pid);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
	return (0);
}
