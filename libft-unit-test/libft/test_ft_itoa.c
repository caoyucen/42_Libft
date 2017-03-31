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

#include <unistd.h>
#include <stdlib.h>

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

char	*ft_strcpy(char *dest, const char *src)
{
    unsigned int		i;
    
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

char	*ft_strnew(size_t size)
{
    char	*str;
    size_t	i;
    
    str = (char*)malloc(sizeof(char) * (size + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (i <= size)
    {
        str[i] = '\0';
        i++;
    }
    return (str);
}

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

	str = ft_strnew(15);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		ft_strcpy(str, "-2147483648");
	if (n < 0)
	{
		n = 0 - n;
		str[0] = '-';
	}
	len = ft_base(n) - 1;
	if (str[0] == '-')
		len++;
	i = len;
	while (i >= 0)
	{
		str[i] = n % 10 - '0';
        ft_putchar(str[i]);
		n = n / 10;
		i--;
	}
	return (str);
}

int main ()
{
    int n = 214;
    ft_putstr(ft_itoa(n));
    return (0);
}
