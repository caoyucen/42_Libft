/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 23:07:09 by ycao              #+#    #+#             */
/*   Updated: 2017/03/23 22:55:34 by ycao             ###   ########.fr       */
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

int	ft_strcmp(const char *s1, const char *s2)
{
	int l;
	int i;

	l = min_strlen(s1, s2);
	i = 0;
	while (i < l)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] > s2[i])
			return (-1);
		i++;
	}
	if (ft_strlen(s1) > ft_strlen(s2))
		return (1);
	if (ft_strlen(s1) < ft_strlen(s2))
		return (-1);
	return (0);
}
