/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 18:12:59 by ycao              #+#    #+#             */
/*   Updated: 2017/03/01 18:13:01 by ycao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void bzero(void *s, int n)
{
	while (n > 0)
	{
		*(char*)s = 0;
		n--;
	}
}