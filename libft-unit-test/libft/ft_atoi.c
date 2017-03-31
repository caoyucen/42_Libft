/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 21:32:28 by ycao              #+#    #+#             */
/*   Updated: 2017/03/23 23:10:20 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_begin(char a)
{
	if (a == ' ' || a == '\t' || a == '\v' || a == '\f' || a == '\r'|| a == '\n')
		return (1);
	else
		return (0);
}

int		ft_neg(char *str)
{
	int	neg;

	neg = 1;
	if (str[0] == '-')
		neg = -1;
	return (neg);
}

int		ft_atoi(const char *str)
{
	int		neg;
	int		i;
	int		num;

	neg = 1;
	i = 0;
	num = 0;
	if (str == NULL)
		return (0);
	while (ft_begin(*(char*)str))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		neg = ft_neg((char*)str);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (neg * num);
}