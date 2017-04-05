/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 16:03:53 by ycao              #+#    #+#             */
/*   Updated: 2017/03/23 23:33:44 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(char s)
{
	if (s == ' ' || s == '\n' || s == '\t')
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		tem;
	char	*str;

	if (!s)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	tem = 0;
	while (ft_isspace(s[tem]))
		tem++;
	ft_strcpy(str, s + tem);
	if (!str)
		return (NULL);
	i = ft_strlen(str) - 1;
	while (i >= 0 && ft_isspace(str[i]))
	{
		str[i] = '\0';
		i--;
	}
	return (str);
}
