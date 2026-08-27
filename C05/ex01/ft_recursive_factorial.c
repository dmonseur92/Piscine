/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 17:13:00 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/22 10:59:35 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	res = nb;
	if (nb > 1)
		res *= ft_recursive_factorial(nb - 1);
	return (res);
}

/*
# include <stdio.h>

int	main()
{
	int	n;

	n = 4;
	printf("%d",ft_recursive_factorial(n));
	return(0);
}*/
