/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:48:24 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/19 16:37:05 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strncat(char	*dest, char	*src, unsigned	int	nb)
{
	char	*dst;

	dst = dest;
	while (*dst != '\0')
	{
		dst++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dst = *src;
		dst++;
		src++;
		nb--;
	}
	*dst = '\0';
	return (dest);
}
