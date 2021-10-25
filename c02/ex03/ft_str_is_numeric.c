/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 21:57:34 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/15 20:10:32 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int	ft_str_is_numeric(char	*str)

{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
//
//int	main(void)
//{
//	char	a[] = "3456789";
//	char	b[] = "heh56e";
//	char	c[] = "";
//
//	printf("%d\n", ft_str_is_numeric(a));
//	printf("%d\n", ft_str_is_numeric(b));
//	printf("%d\n", ft_str_is_numeric(c));
//}
