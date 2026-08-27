/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:42:54 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/12 10:08:46 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {   
//     char    beta[]="78gd$#@7";
// 	char	digits[]="7894651230";
// 	char	empty[]="";

//     printf("%d", ft_str_is_numeric(beta));
//     return 0;
// }
