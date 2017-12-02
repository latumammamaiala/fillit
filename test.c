/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:04:45 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/01 19:05:58 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

void	print(t_list *block)
{
	while (block)
	{
		printf("%s", block->content);
		printf("%c", '\n');
		block = block->next;
	}
}
