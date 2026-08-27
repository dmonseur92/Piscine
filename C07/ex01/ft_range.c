/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: billy <billy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:26:38 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/24 10:38:02 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	else
		len = max - min;
	range = malloc (sizeof(int) * len);
	if (range == NULL)
		return (NULL);
	while (i < len)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
#include <stdio.h>

int main()
{
	int min;
	int max;

	min = 3;
	max = 14;

	while (min < max)
	{
		printf("%d", *ft_range(min, max));
		min++;
		printf("\n");
	}
	return (0);
}*/
