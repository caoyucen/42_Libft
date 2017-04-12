/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 15:46:32 by ycao              #+#    #+#             */
/*   Updated: 2017/03/23 22:37:17 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_base(int n)
{
	int i;

	i = 0;
	while (n >= 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}


char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;
	
	str = (char*)malloc(sizeof(char) * 13);
	if (!str)
		return (NULL);
	if (n == -2147483648 )
	{
		ft_strcpy(str, "-2147483648\0");
		return (str);
	}
	if (n == 0)
	{
		str[0] = 0 + '0';
		str[1] = '\0';
		return (str);
	}
	if (n < 0)
	{
		n = 0 - n;
		str[0] = '-';
	}
	len = ft_base(n) - 1;
	if (str[0] == '-')
		len++;
	str[len + 1] = '\0';
	i = 0;
	while (n >= 1)
	{
		str[len - i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	return (str);
}

