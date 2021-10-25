/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 22:18:31 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/15 20:29:21 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char	*str)

{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
//
//int	main(void)
//{
//	char a[] = "1234";
//	char b[] = "ABCD";
//	char c[] = "";
//
//	printf("%d\n", ft_str_is_uppercase(a));
//	printf("%d\n", ft_str_is_uppercase(b));
//	printf("%d\n", ft_str_is_uppercase(c));
//}
