/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:10:03 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/09 11:17:29 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int 	main()
{
	int div;

	int mod;

	ft_div_mod(5, 2, &div, &mod);
	printf("%d", div);
	printf("%c",'\n');
	printf("%d", mod);
	
	return 0;
}*/
