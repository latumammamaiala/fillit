/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 19:00:20 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/01 18:30:11 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	char	*ptr2;
	size_t	i;

	if (!(ptr = (char*)malloc(size)))
		return (NULL);
	i = 0;
	ptr2 = (char*)ptr;
	while (i < size)
		ptr2[i++] = 0;
	return (ptr);
}
