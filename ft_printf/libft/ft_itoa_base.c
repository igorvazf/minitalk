/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 10:03:01 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/31 10:03:04 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

static void	strrev(char *str)
{
	char	temp;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(str) - 1;
	if (str[start] == '-')
		start++;
	while (str[start] && start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

static size_t	nb_len(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		len = 1;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa_base(unsigned long nbr, char *base)
{
	char	*str;
	size_t	len_base;
	size_t	i;

	if (nbr == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * (nb_len(nbr) + 1));
	if (!str)
		return (NULL);
	len_base = ft_strlen(base);
	i = 0;
	while (nbr)
	{
		str[i] = base[nbr % len_base];
		nbr = nbr / len_base;
		i++;
	}
	str[i] = '\0';
	strrev(str);
	return (str);
}
