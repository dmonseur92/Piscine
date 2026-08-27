/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 11:21:22 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/09 11:39:28 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int	*b)
{
	int	p;

	p = *a / *b;
	*b = *a % *b;
	*a = p;
}

/*#include <stdio.h>

int	main(void)
{
	int a;
	
	int b;
	
	a = 5;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%c",'\n');
	printf("%d", b);

}*/
