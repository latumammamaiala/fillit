/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 12:57:10 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/01 18:29:39 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *temp;

	if (alst == NULL || del == NULL)
		return ;
	temp = *alst;
	del(temp->content, temp->content_size);
	free(temp);
	*alst = NULL;
}
