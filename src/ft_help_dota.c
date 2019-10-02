/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help_dota.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmormont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:53:45 by vmormont          #+#    #+#             */
/*   Updated: 2019/09/23 14:26:28 by vmormont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*un(char *main, char *s)
{
	char	*tmp_c;

	tmp_c = main;
	if (*s == '-')
		main = ft_strjoin(s, main);
	else
		main = ft_strjoin(main, s);
	free(tmp_c);
	return (main);
}

int		max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
