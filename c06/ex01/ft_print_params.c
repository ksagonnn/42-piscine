/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 12:48:12 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/24 13:02:59 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	main(int	argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		 j = 0;
		 while (argv[i][j])
			 {
			 write(1, &argv[i][j], 1);
			 j++;
			 }
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
