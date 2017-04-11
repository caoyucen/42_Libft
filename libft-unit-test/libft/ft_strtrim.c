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
	int		len;
	char	*str;

	if (!s)
	 	return (NULL);
	while (ft_isspace(*s) && s)
		s++;
	if (!s)
		return (NULL);
	len = ft_strlen(s) - 1;
	while (ft_isspace(s[len]))
		len--;
	str = ft_strnew(len + 1 + 1);
	ft_strncpy(str, s, (len + 1));
	return (str);
}