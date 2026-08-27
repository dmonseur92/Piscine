/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 16:28:11 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/22 10:55:11 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	if (res < 0)
		return (-res);
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	int	nb;

	nb = 24;
	printf("%d",ft_iterative_factorial(nb));
	return(0);
}*/
