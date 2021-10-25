/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:52:28 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/13 00:25:14 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb(void)

{
	char	nb[3];

	nb[0] = '0';
	nb[1] = '1';
	nb[2] = '2';
	while (nb[0] <= '7')
	{
		nb[1] = nb[0] + 1;
		while (nb[1] <= '8')
		{
			nb[2] = nb[1] + 1;
			while (nb[2] <= '9')
			{
				write(1, nb, 3);
				if (nb[0] != '7')
					write(1, ", ", 2);
				nb[2]++;
			}			
			nb[1]++;
		}
		nb[0]++;
	}
}