/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmormont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:30:14 by vmormont          #+#    #+#             */
/*   Updated: 2019/09/23 14:30:18 by vmormont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	char *tmp;

	if (s)
	{
		tmp = (char*)s;
		if (s)
			while (*tmp)
				tmp++;
		return (tmp - s);
	}
	return (0);
}
