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

int		ft_wlen(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}


char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		n_word;
	int		i;
	int		j;
	
	if (!s)
		return (NULL);
	n_word = ft_word(s, c);
	str = (char**)malloc(sizeof(char*) * (n_word + 1));
	if (!str)
		return (NULL);
	str[n_word] = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j] = ft_strnew(ft_wlen(&s[i], c) + 1);
			ft_strncpy(str[j], &s[i], ft_wlen(&s[i], c));
			i = i + ft_wlen(&s[i], c);
			j++;
		}
		else
			i++;
	}
	return (str);
}
