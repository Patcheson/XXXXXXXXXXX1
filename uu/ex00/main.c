/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smposula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 16:41:04 by smposula          #+#    #+#             */
/*   Updated: 2020/01/25 14:03:54 by pmolokwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush00.c"

int main(int argc, char **argv)
{
	if(argc == 3)
	{
	rush(argv[1][0],argv[2][0]);
	}
	return (0);
}
