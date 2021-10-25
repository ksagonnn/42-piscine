/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factoral.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 16:13:03 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/22 13:51:43 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_iterative_factorial(int	nb)

{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			i *= nb;
			nb--;
		}
	}
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	return (i);
}
//
//int	main(void)
//{
//	printf("%d\n", ft_iterative_factorial(-5));
//}
