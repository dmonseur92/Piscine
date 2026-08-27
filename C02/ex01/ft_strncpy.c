/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <dmonseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:56:23 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/12 14:27:41 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i ++;
	}
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	char str1[]="Hiyouuuuuu";
	char str2[]="AAAAAAAA";
	ft_strncpy(str2, str1, 5);
	printf("%s", str2);
	return 0;
}*/
