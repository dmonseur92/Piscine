/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: billy <billy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 16:58:35 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/25 18:35:52 by dmonseur         ###   ########.fr       */
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

int	ft_tablen(char **str, int size)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (i < size)
	{
		res += ft_strlen(str[i]);
		i++;
	}
	return (res);
}

char	*ft_join(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			res[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			res[k++] = sep[j++];
		i++;
	}
	res[k] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		total_len;

	if (size == 0)
	{
		res = malloc (sizeof(char));
		res[0] = '\0';
		return (res);
	}
	total_len = ft_tablen(strs, size) + ((size - 1) * ft_strlen(sep));
	res = malloc (sizeof(char) * (total_len + 1));
	if (res == NULL)
		return (NULL);
	res = ft_join(size, strs, sep, res);
	return (res);
}
/*
#include <stdio.h>
int main()
{
	int size;
	char sep[] = " connard de ";
	char *str[4] = {
		"un",
		"petit",
		"cannard",
		NULL
		};
	size = 3;

	printf("%s", ft_strjoin(size, str, sep));
	return (0);
}
*/
