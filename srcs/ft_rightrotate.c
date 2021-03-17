/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rightrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:04:02 by alalonzo          #+#    #+#             */
/*   Updated: 2021/03/16 14:05:02 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_rightrotate(unsigned int n, int offset)
{
	unsigned int	i;

	i = (n >> offset) | (n << (32 - offset));
	return (i);
}
