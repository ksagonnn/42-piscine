/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 12:52:39 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/22 17:11:24 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_sqrt(int	nb)

{
	int	n;

	n = 1;
	if (nb == 0)
		return (0);
	if (n >= 46340)
		return (0);
	while ((n * n) < nb && n < 46341)
		n++;
	if ((n * n) == nb)
		return (n);
	else
		return (0);
}
//
//int	main(void)
//
//{
//	printf("-10 = %d (0)\n", ft_sqrt(-10));
//	printf("-1 = %d (0)\n", ft_sqrt(-1));
//	printf(" 0 = %d (0)\n", ft_sqrt(0));
//	printf(" 1 = %d (1)\n", ft_sqrt(1));
//	printf(" 2 = %d (0)\n", ft_sqrt(2));
//	printf(" 3 = %d (0)\n", ft_sqrt(3));
//	printf(" 4 = %d (2)\n", ft_sqrt(4));
//	printf(" 9 = %d (3)\n", ft_sqrt(9));
//	printf(" 16 = %d (4)\n", ft_sqrt(16));
//	printf(" 25 = %d (5)\n", ft_sqrt(16));
//}
