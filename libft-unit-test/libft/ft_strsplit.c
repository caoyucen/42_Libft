/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 13:22:24 by ycao              #+#    #+#             */
/*   Updated: 2017/03/23 23:02:36 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_word(char const *s, char c)
{
	int		i;
	int		num;
	int		mark;

	i = 0;
	num = 0;
	mark = 1;
	while (s[i])
	{
		if (s[i] == c)
			mark = 1;
		if (s[i] != c && mark == 1)
		{
			mark = 0;
			num++;
		}
		i++;
	}
	return (num);
}

void	ft_mallocline(char **str, int n, int len)
{
	int		i;

	i = 0;
	str = (char**)malloc(sizeof(char*) * n);
	str[n + 1] = 0;
	while (i < n)
	{
		str[i] = ft_strnew(len);
		i++;
	}
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		n_word;
	int		i;
	int		j;
	int		z;

	str = 0;
	n_word = ft_word(s, c);
	ft_mallocline(str, n_word, ft_strlen(s));
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			z = -1;
			while (s[i] != c)
			{
				str[j][++z] = s[i];
				i++;
			}
			j++;
		}
		i++;
	}
	return (str);
}
