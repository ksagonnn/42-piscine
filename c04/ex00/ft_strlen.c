/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 11:07:23 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/19 17:07:07 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
//int		main (void)
//{
//	char str[] = "hahahahahahahahaha";
//	char *p_str;
//
//	p_str = str;
//
//	int count = ft_strlen(p_str);
//
//	printf("%d\n", count);
//}
