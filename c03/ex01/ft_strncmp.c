/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 12:00:28 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/18 21:56:13 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <string.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int n)

{
	int				result;
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i] && i < n)
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	return (0);
}
