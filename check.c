/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:58:20 by cfavero           #+#    #+#             */
/*   Updated: 2017/11/30 14:53:46 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_boh(char *s, int dot, int hag, int n)
{
	int i;
	int pezzi;

	i = 0;
	pezzi = 0;
	while (s[i])
	{
		dot = 0;
		hag = 0;
		n = 0;
		while (n < 5 && s[i])
		{
			if (!(s[i] == '#' || s[i] == '.' || s[i] == '\n'))
				return (0);
			dot = (s[i] == '.') ? ++dot : dot;
			hag = (s[i] == '#') ? ++hag : hag;
			n = (s[i] == '\n') ? ++n : n;
			if (s[i] == '\n' && n != 5)
				if (!((4 * n) == (dot + hag)))
					return (0);
			i++;
		}
		pezzi++;
		if (!(dot == 12 && hag == 4))
			return (0);
	}
	return (pezzi);
}

int		c_elem(char *s)
{
	int dot;
	int hag;
	int n;
	int pezzi;

	dot = 0;
	hag = 0;
	n = 0;
	pezzi = ft_boh(s, dot, hag, n);
	return (pezzi);
}
