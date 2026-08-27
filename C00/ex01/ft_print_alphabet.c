/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: dmonseur <marvin@42.fr>		    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2026/02/04 18:23:00 by dmonseur	       #+#    #+#	      */
/*   Updated: 2026/02/05 14:44:27 by dmonseur         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

/*int main(){
	ft_print_alphabet();
	return 0;
}*/
