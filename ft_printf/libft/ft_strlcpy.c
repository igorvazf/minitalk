/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:54:53 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/08/11 13:56:26 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)src;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (ptr[i] && i < (size - 1))
		{
			dst[i] = ptr[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
