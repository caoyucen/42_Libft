/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 18:59:04 by ycao              #+#    #+#             */
/*   Updated: 2017/03/15 20:38:36 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char*	ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char*	b;
	char*	l;
	char*	t;
	size_t	tem;

	i = 0;
	b = (char*)big;
	l = (char*)little;
	if (*little == NULL)
	{
		return ((char*)big);
	}
	while (big[i] != '\0' && i < len)
	{
		if (b[i] == l[0])
		{
			t = b + i;
			j = 1;
			tem = 0;
			while (tem < len && l[j])
			{
				tem = i + 1;
				if (b[tem] != l[j])
					t = NULL;
				j++;
				tem++;
			}
			if (t != NULL)
				return (t);
		}
		i++;
	}
	return NULL;
}
