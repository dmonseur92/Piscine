/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:46:49 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/05 15:20:56 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	c = 'P';
	if (n >= 0)
	{
		write(1, &c, 1);
		return ;
	}
	else
	{
		c = 'N';
		write(1, &c, 1);
	}
}

/* int main(){
	ft_is_negative(1);
		return 0;
}*/
