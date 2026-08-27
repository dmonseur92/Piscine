/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <dmonseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:16:51 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/12 10:10:42 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	j = 1;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			if (str[j] >= 'a' && str[j] <= 'z')
				if (str[i] < '0' || str[i] > '9')
					str[j] -= 32;
		i++;
		j++;
	}
	return (str);
}

/*#include <stdio.h>
int	main()
{
	char	cap[]="hello-cApitalIze#this42string";

	printf("%s", ft_strcapitalize(cap));
	return 0;
}*/
