/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/15 15:44:27 by ycao              #+#    #+#             */
/*   Updated: 2017/03/15 19:38:46 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char*	ft_strstr(const char *big, const char *little)
{
	int		i;
	int		j;
	char*	b;
	char*	l;
	char*	t;
	int		tem;

	i = 0;
	b = (char*)big;
	l = (char*)little;
	if (little == NULL)
	{
		return ((char*)big);
	}
	while (b[i])
	{
		if (b[i] == l[0])
		{
			t = b + i;
			j = 1;
			while (l[j])
			{
				tem = i + 1;
				if (b[tem] != l[j])
					t = NULL;
				j++;
			}
			if (t != NULL)
				return (t);
		}
		i++;
	}

	return NULL;
}
