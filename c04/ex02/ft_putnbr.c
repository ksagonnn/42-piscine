/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 18:32:21 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/20 22:49:59 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)

{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(48 + nb % 10);
	}
}
//int		main(void)
//{
//  printf(" (printed) should be 1");
//  ft_putnbr(1);
//  printf("\n (printed) should be 0");
//  ft_putnbr(0);
//  printf("\n (printed) should be -1");
//  ft_putnbr(-1);
//  printf("\n (printed) should be 2147483647");
// ft_putnbr(2147483647);
//  printf("\n (printed) should be -21474836478");
//  ft_putnbr(-2147483648);
//  printf("\n");
// return (0);
//}
