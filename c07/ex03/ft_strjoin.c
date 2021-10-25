/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 16:50:00 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/27 23:07:26 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

char	*ft_strjoin_next(int size, char *tab, char *sep, char **strs)
{
	int	c;

	c = 0;
	while (c < size)
	{
		ft_strcat(tab, strs[c]);
		if (c != size - 1)
			ft_strcat(tab, sep);
		c++;
	}
	tab[c] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		c;
	int		x;

	c = 0;
	x = 0;
	if (size == 0)
	{
		tab = malloc(1);
		tab[0] = '\0';
		return (tab);
	}
	while (c < size)
	{
		x += ft_strlen(strs[c]);
		c++;
	}
	tab = malloc(x + (size - 1) * ft_strlen(sep) + 1);
	if (tab == NULL)
		return (NULL);
	return (ft_strjoin_next(size, tab, sep, strs));
}

int	ft_strlen(char	*str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	t;

	t = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
		i++;
	if (dest[t + i] != '\0')
		return (dest);
	return (0);
}
