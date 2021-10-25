/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 14:45:00 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/22 20:24:30 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_iterative_power(int	nb, int	power)

{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}
//int		main(void)
//{
//	printf("-3 ^-1 = %d (0)\n", ft_iterative_power(-3, -1));
//	printf("-3 ^ 0 = %d (1)\n", ft_iterative_power(-3, 0));
//	printf("-3 ^ 1 = %d (-3)\n", ft_iterative_power(-3, 1));
//	printf("-3 ^ 2 = %d (9)\n", ft_iterative_power(-3, 2));
//	printf("-3 ^ 3 = %d (-27)\n", ft_iterative_power(-3, 3));
//	printf(" 0 ^-1 = %d (0)\n", ft_iterative_power(0, -1));
//	printf(" 0 ^ 0 = %d (1)\n", ft_iterative_power(0, 0));
//	printf(" 0 ^ 2 = %d (0)\n", ft_iterative_power(0, 2));
//	printf(" 4 ^-1 = %d (0)\n", ft_iterative_power(4, -1));
//}
