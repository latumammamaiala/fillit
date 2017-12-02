/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 15:05:23 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/01 15:44:19 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void ft_split(t_lst *list)
{
	while (list->next)
	{
		list->map = ft_strsplit(list->str, '\n');
		list = list->next;
	}
}

static void ft_coord(t_lst *first)
{
	int i;
	int j;
	t_lst *list;

	i = 0;
	list = first;
	while (list->next)
	{
		j = 0;
		while (list->str[i])
		{
			if (list->str[i] == '#')
			{
				list->x[j] = i % 5;
				list->y[j] = i / 5;
				j++;
			}
			i++;
		}
		list = list->next;
	}
	ft_split(first);
}

t_lst *ft_range(char *buf)
{
	t_lst *first;
	t_lst *tmp;
	int i;
	char letter;

	if (!(first = (t_lst *)malloc(sizeof(t_lst))))
		return (NULL);
	tmp = first;
	i = 0;
	letter = 'A';
	while (buf[i])
	{
		tmp->str = ft_strsub(buf, i, 20);
		tmp->letter = letter++;
		if (!(tmp->next = (t_lst *)malloc(sizeof(t_lst))))
			return (NULL);
		tmp = tmp->next;
		i += 21;
	}
	free(tmp);
	tmp = NULL;
	ft_coord(first);
	return (first);
}
