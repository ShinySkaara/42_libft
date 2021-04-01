/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_byteswap64.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 20:52:22 by alalonzo          #+#    #+#             */
/*   Updated: 2021/04/01 20:59:45 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_byteswap64(unsigned long x)
{
	unsigned long	a;
	unsigned long	b;

	a = x;
	b = (x >> 32);
	a = ft_byteswap32(a);
	b = ft_byteswap32(b);
	return ((a << 32) | b);
}
