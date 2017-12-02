/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfavero <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 15:49:58 by cfavero           #+#    #+#             */
/*   Updated: 2017/12/02 17:13:00 by cfavero          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int main (int ac, char **av)
{
	char	*str;

	if (ac != 2)
		return (0);
	str = alc(av[1]);
	if (c_elem(str) != 0 && c_pezzi(str) == 1)
		write (1, "The table is fine\n", 18);
	else
		write (1, "The table is NOT fine\n", 22);
	if (c_elem(str) != 0)
	{
		write (1, "The number of blocks are ", 25);
		printf("%d", c_elem(str));
	}
	printf("%c", '\n');
	print(muovi(ft_cut(c_elem(str), str)));
//	printf("%s", mv_left(str));
	printf("%d", ft_small(c_elem(str)));
	return (0);
}
