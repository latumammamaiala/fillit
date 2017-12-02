/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   es1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:57:24 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/01 18:30:10 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*a;

	if (!(a = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		if (!(a->content = malloc(content_size)))
			return (NULL);
		ft_memcpy(a->content, content, content_size);
		a->content_size = content_size;
	}
	else
	{
		a->content = NULL;
		a->content_size = 0;
	}
	a->next = NULL;
	return (a);
}
