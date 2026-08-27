/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 10:56:12 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/23 11:00:54 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	copy = malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	if (copy == NULL)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
#include <stdio.h>
int main()
{
    char str[] = "IS IT THAT IZI?";
    char *trash;

    trash = ft_strdup(str);
    printf("%s", ft_strdup(str));
    free(trash);
    return (0);
}*/
