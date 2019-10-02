/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mempcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmormont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 00:11:35 by vmormont          #+#    #+#             */
/*   Updated: 2019/04/08 00:24:07 by vmormont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_mempcpy(void *dst, const void *src, size_t len)
{
	return ((ft_memcpy(dst, src, len)) + len);
}
