/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:33:27 by ksagon            #+#    #+#             */
/*   Updated: 2021/07/26 17:48:41 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_ultimate_range(int	**range, int	min, int	max)

{
	int	*arr;
	int	len;
	int	i;

	len = max - min;
	i = 0;
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * len);
	if (arr == NULL)
		return (-1);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	*range = arr;
	return (len);
}
/*void	test_ultimate_range_function(int min, int max);
void	print_test(int *test, int size);

int		main(void)
{
	test_ultimate_range_function(3, 5);
	test_ultimate_range_function(0, 11);
	test_ultimate_range_function(8, 2);
	test_ultimate_range_function(2, 2);
	test_ultimate_range_function(10, 20);
	test_ultimate_range_function(20, 15);
	test_ultimate_range_function(99, 99);
	test_ultimate_range_function(1, 12);
}

void	test_ultimate_range_function(int min, int max)
{
	int size;
	int *test;

	size = ft_ultimate_range(&test, min, max);
	printf("\nsize = %d\n", size);
	print_test(test, size);
	free(test);
}

void	print_test(int *test, int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d - ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}*/
