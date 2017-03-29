/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:14:00 by ycao              #+#    #+#             */
/*   Updated: 2017/03/09 15:08:10 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	size_t				j;

	i = -1;
	j = n;
	if ((unsigned char*)dest > (unsigned char*)src && (unsigned char*)dest <= (unsigned char*)src[1 + n])
	{
		while (--j >= 0)
			(unsigned char*)dest[j] = (unsigned char*)src[j];
	}
	else
	{
		while (++i < n)
			(unsigned char*)dest[i] = (unsigned char*)src[i];
	}
	return dest;
}
