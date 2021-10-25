/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 13:30:35 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/22 20:08:47 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_recursive_factorial(int	nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 0)
		return (i * ft_recursive_factorial(nb - 1));
	return (0);
}
//
//int	main(void)
//{
//	printf("%d\n", ft_recursive_factorial(1));
//	return (0);
//}
