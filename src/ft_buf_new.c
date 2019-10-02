/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buf_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmormont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:25:26 by vmormont          #+#    #+#             */
/*   Updated: 2019/09/23 14:25:31 by vmormont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_buf				*ft_buf_new(t_buf *new)
{
	new->size = 0;
	new->top = -1;
	new->err = 0;
	if (!(new->buf = ft_strnew(BUF_SIZE)))
		return (NULL);
	return (new);
}
