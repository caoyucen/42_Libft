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

//char	*ft_itoa(int n)
//{
//	char	*str;
//	int		len;
//	int		i;
//
//	str = ft_strnew(12);
//	if (!str)
//		return (NULL);
//	if (n == -2147483648)
//		ft_strcpy(str, "-2147483648");
//	if (n < 0)
//	{
//		n = 0 - n;
//		str[0] = '-';
//	}
//	len = ft_base(n) - 1;
//	if (str[0] == '-')
//		len++;
//	i = len;
//	while (i >= 0)
//	{
//		str[i] = n % 10;
//		n = n / 10;
//		i--;
//	}
//	return (str);
//}

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
		//ft_putchar('a');
		str[len - i] = n % 10 + '0';
		//ft_putchar('b');
		//ft_putchar(str[len - i]);
		n = n / 10;
		i++;
	}
	return (str);
}

