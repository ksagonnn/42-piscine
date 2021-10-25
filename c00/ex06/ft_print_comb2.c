/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:31:27 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/12 12:53:51 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char	a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	g;
	int	d;

	g = 0;
	while (g <= 98)
	{
		d = g;
		while (d <= 99)
		{
			if (d != g)
			{
				ft_putchar(g / 10 + 48);
				ft_putchar(g % 10 + 48);
				write (1, " ", 1);
				ft_putchar(d / 10 + 48);
				ft_putchar(d % 10 + 48);
				if (g < 98)
				{
					write(1, ", ", 2);
				}
			}
			d++;
		}
		g++;
	}
}
