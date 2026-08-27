/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 12:08:46 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/08 18:08:54 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	p;

	p = *a;
	*a = *b;
	*b = p;
}

/*#include <stdio.h>

int	main(void)
{
	int	nb1;

	nb1 = 1;

	int	nb2;

	nb2 = 5;
	ft_swap(&nb1, &nb2);
	printf("%d", nb1);
	printf("%c",'\n');
	printf("%d", nb2);
	return 0;
}*/
