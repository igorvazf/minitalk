/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igvaz-fe <igvaz-fe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:49:01 by igvaz-fe          #+#    #+#             */
/*   Updated: 2021/10/11 15:04:42 by igvaz-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_itoa_base(unsigned long nbr, char *base);
int		ft_atoi(const char *str);
int		ft_isdigit(int i);

#endif
