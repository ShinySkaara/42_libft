/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_leftrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:37:58 by alalonzo          #+#    #+#             */
/*   Updated: 2021/03/16 13:38:45 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_leftrotate(unsigned int n, int offset)
{
	unsigned int	i;

	i = (n << offset) | (n >> (32 - offset));
	return (i);
}
