/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 21:32:28 by ycao              #+#    #+#             */
/*   Updated: 2017/03/15 22:29:59 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_begin(char a)
{
	if (a == ' ' || a == '\t')
		return (1);
	else
		return (0);
}

int		ft_neg(char* str)
{
	int	neg;

	neg = 1;
	if(str[0] == '-')
		neg = -1;
	return neg;
}

int		ft_atoi(const char *str)
{
	int		neg;
	int		i;
	int		num;
	//int		mark;

	neg = 1;
	i = 0;
	num = 0;
	//mark = 0;
	if (str == NULL)
		return (0);
	while (ft_begin((char*)str))
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


