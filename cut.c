/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:01:03 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/01 19:23:36 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_cut(int pezzi, char *s)
{
	t_list	*block;
	t_list	*boh;
	char	*str;
	int		start;

	start = 0;
	block = (t_list*)malloc(sizeof(t_list));
	while (pezzi--)
	{
		str = ft_strsub(s, start, 20);
		start = start + 21;
		if (start == 21)
		{
			block = ft_lstnew(str, 20);
			boh = block;
		}
		else
		{
			block->next = ft_lstnew(str, 20);
			block = block->next;
		}
	}
	return (boh);
}
