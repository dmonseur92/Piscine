/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:42:54 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/12 10:08:22 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 122)
		{
			if (str[i] > 90 && str[i] < 97)
				return (0);
			else
				i++;
		}
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {   
//     char    alpha[]="OnlyAlpha";
//     char    beta[]="gd$#@7";
// 	char	empty[]="";

//     printf("%d", ft_str_is_alpha(empty));
//     return 0;
// }
