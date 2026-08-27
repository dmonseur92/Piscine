/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:42:54 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/12 10:09:48 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {  
// 	char	big[] = "ASDSFFVC";
//  char    beta[]="78gd$#@7";
// 	char	digits[]="7894651230";
// 	char	empty[]="";
// 	char	tabs[]="		";

//     printf("%d", ft_str_is_printable(tabs));
//     return 0;
// }
