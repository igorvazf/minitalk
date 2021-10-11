/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:43:58 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/05 09:50:25 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	unsigned int	i;
	char			*ptr;
	char			x;

	i = 0;
	ptr = (char *)str;
	x = (char)c;
	while (ptr[i] && ptr[i] != x)
		i++;
	if (ptr[i] == x)
		return (&ptr[i]);
	return (0);
}
