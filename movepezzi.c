/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movepezzi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 13:46:06 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/01 19:33:00 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*mv_top(char *pz)
{
	int k;

	while (pz[1] == '.' && pz[2] == '.' && pz[3] == '.' && pz[0] == '.')
	{
		k = 0;
		while (pz[k])
		{
			if (pz[k] == '#')
			{
				pz[k - 5] = '#';
				pz[k] = '.';
			}
			k++;
		}
	}
	return (pz);
}

char	*mv_left(char *pz)
{
	int k;

	while (pz[0] == '.' && pz[5] == '.' && pz[10] == '.' && pz[15] == '.')
	{
		k = 0;
		while (pz[k])
		{
			if (pz[k] == '#')
			{
				pz[k - 1] = '#';
				pz[k] = '.';
			}
			k++;
		}
	}
	return (pz);
}

char	*ft_change(char *s, char lett)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '#')
			s[i] = lett;
		i++;
	}
	return (s);
}

char	*mv_tl(char *s, char lett)
{
	s = mv_left(s);
	s = mv_top(s);
	s = ft_change(s, lett);
	return (s);
}

t_list	*muovi(t_list *block)
{
	t_list *new;
	char	lett;

	new = block;
	lett = 'A';
	while (block)
	{
		block->content = mv_tl(block->content, lett);
		block = block->next;
		lett++;
	}
	return (new);
}
