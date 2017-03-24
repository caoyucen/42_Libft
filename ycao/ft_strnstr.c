/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 18:59:04 by ycao              #+#    #+#             */
/*   Updated: 2017/03/23 23:00:27 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*t;

	i = 0;
	if (!little)
		return ((char*)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			t = (char*)big + i;
			j = 0;
			while (j < len && little[j])
			{
				if (big[i + j] != little[j])
					t = NULL;
				j++;
			}
			if (t != NULL)
				return (t);
		}
		i++;
	}
	return (NULL);
}
