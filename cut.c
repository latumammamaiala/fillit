/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cut.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:01:03 by cfavero           #+#    #+#             */
/*   Updated: 2017/11/30 16:46:47 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_cut(int pezzi, char *s)
{
	t_list	*block;
	t_list	*boh;
	int		i;
	char	*str;
	int		n;
	int		start;

	i = 0;
	n = 0;
	start = 0;
	block = (t_list*)malloc(sizeof(t_list))
	while (n < c_elem(s) && s[i])
	{
		str = ft_memalloc(21);
		str = ft_strsub(s, start, 20);
		start = start + 21;
		n++;
		if (n == 1)
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
	ft_lstdel(*boh, ft_putstr);
	return (boh);
}
