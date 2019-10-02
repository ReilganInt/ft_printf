/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmormont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:29:27 by vmormont          #+#    #+#             */
/*   Updated: 2019/09/23 14:29:29 by vmormont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long double	ft_neg_pow(long double n, int pow)
{
	long double res;

	res = 1;
	pow *= -1;
	while (pow)
		if (pow & 1)
		{
			res = (long double)res / (long double)n;
			--pow;
		}
		else
		{
			n = (long double)n * (long double)n;
			pow >>= 1;
		}
	return (res);
}
