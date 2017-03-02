/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:24:37 by ycao              #+#    #+#             */
/*   Updated: 2017/03/01 19:24:44 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

void  ft_putnbr(int n)
{
  if (n == -2147483648)
  {
    ft_putstr("-2147483648");
  }
  else
  {
    if (n < 0)
    {
      ft_putchar('-');
      n = -n;
    }
    while (n > 1)
    {
      
    }
  }
}
