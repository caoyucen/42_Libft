/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:12:34 by ycao              #+#    #+#             */
/*   Updated: 2017/03/01 18:12:39 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t n)
{
//	unsigned char	*p;
//
//	p = (unsigned char*)str;
	size_t	i;
	
	i = 0;
	while (i < n)
	{
		//*p = (unsigned char)c;
		//p++;
		((unsigned char*)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
