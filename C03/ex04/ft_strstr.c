/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <dmonseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:45:39 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/17 10:13:44 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str + i);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && to_find[j] == str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main ()
{
	char	str1[]="nacHE97ncHEREf654@s";
	char	str2[]="HERE";

	printf("%s",ft_strstr(str1, str2));
	return 0;
}*/
