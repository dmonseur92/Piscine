/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: billy <billy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 14:13:37 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/24 10:39:27 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
#include <stdio.h>

int main(void)
{
	int *test;
	int size;
	int i;

	size = ft_ultimate_range(&test, 3, 14);

	if (size == -1)
		return (1);

	i = 0;
	while (i < size)
	{
		printf("%d\n", test[i]);
		i++;
	}
	free(test);
	return (0);
}*/
