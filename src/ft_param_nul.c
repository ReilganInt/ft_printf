/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_nul.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmormont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 14:27:57 by vmormont          #+#    #+#             */
/*   Updated: 2019/09/23 14:28:01 by vmormont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void				ft_param_nul(t_param *param)
{
	param->precision = -1;
	param->width = 0;
	param->minus = 0;
	param->plus = 0;
	param->zero = 0;
	param->hasht = 0;
	param->space = 0;
	param->length = 0;
}
