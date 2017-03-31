/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 20:47:31 by ycao              #+#    #+#             */
/*   Updated: 2017/03/23 22:57:15 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	min_strlen(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (i + 1);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	l;
	size_t	i;

	l = min_strlen(s1, s2);
	if (l > n)
		l = n;
	i = 0;
	while (i < l)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}
