/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:19:40 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/11 16:36:27 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nb)
{
	write(1, &nb, 1 );
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_unsigned;

	if (nb < 0)
	{
		nb_unsigned = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
	{
		nb_unsigned = (unsigned int)nb;
	}
	if (nb_unsigned >= 10)
	{
		ft_putnbr(nb_unsigned / 10);
		ft_putnbr(nb_unsigned % 10);
	}
	else
		ft_putchar(nb_unsigned + '0');
}
