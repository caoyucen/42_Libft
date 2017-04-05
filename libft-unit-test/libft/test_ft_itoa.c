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

<<<<<<< HEAD
	str = (char*)malloc(sizeof(char) * 15);
	if (!str)
		return (NULL);
	if (n == -2147483648)
    {
		ft_strcpy(str, "-2147483648\0");
        return (str);
    }
=======
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
>>>>>>> 0ebac4c96cfadc6aed2bbf6f44ce427523584d10
	if (n < 0)
	{
		n = 0 - n;
		str[0] = '-';
	}
	len = ft_base(n) - 1;
	if (str[0] == '-')
		len++;
<<<<<<< HEAD
    str[len + 1] = '\0';
	i = 0;
    //ft_putchar('a');
	while (i <= ft_base(n))
	{
		str[len - i] = n % 10 + '0';
        ft_putchar('\n');
        ft_putchar(str[len - i]);
=======
	str[len + 1] = '\0';
	i = 0;
	while (n >= 1)
	{
		//ft_putchar('a');
		str[len - i] = n % 10 + '0';
		//ft_putchar('b');
        //ft_putchar(str[len - i]);
>>>>>>> 0ebac4c96cfadc6aed2bbf6f44ce427523584d10
		n = n / 10;
		i++;
	}
	return (str);
}

int main ()
{
<<<<<<< HEAD
    int n = -12345;
=======
    int n = 21474645;
>>>>>>> 0ebac4c96cfadc6aed2bbf6f44ce427523584d10
    ft_putstr(ft_itoa(n));
	ft_putchar('\n');
    return (0);
}
