/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: billy <billy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 19:11:40 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/23 10:47:00 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqr;

	sqr = 1;
	while (sqr <= nb)
	{
		if (nb == sqr * sqr)
			return (sqr);
		sqr++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main()
{
	int	nb;

	nb = 9;
	printf("%d", ft_sqrt(nb));
	return (0);
}*/
