/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmolokwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 16:31:04 by pmolokwa          #+#    #+#             */
/*   Updated: 2020/01/26 14:58:54 by pmolokwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

void	ft_print_manager(int x, char startchar, char midchar, char endchar)
{
	ft_putchar(startchar);
	while ((x - 1) > 1)
	{
		ft_putchar(midchar);
		x--;
	}
	if (x > 1)
		ft_putchar(endchar);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_manager(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			ft_print_manager(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
		{
			ft_print_manager(x, 'A', 'B', 'A');
		}
	}
	return ;
}
