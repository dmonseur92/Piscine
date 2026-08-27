/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonseur <dmonseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 10:54:08 by dmonseur          #+#    #+#             */
/*   Updated: 2026/02/25 14:30:38 by dmonseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (!ft_is_sep(str[i], sep))
		{
			count++;
			while (str[i] && !ft_is_sep(str[i], sep))
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_word_len(char *str, char *sep)
{
	int	len;

	len = 0;
	while (str[len] && !ft_is_sep(str[len], sep))
		len++;
	return (len);
}

char	**ft_fill(char **res, char *str, char *charset, int words)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		len = ft_word_len(str, charset);
		res[i] = malloc(len + 1);
		if (res[i] == NULL)
			return (NULL);
		j = 0;
		while (j < len)
		{
			res[i][j] = *str;
			str++;
			j++;
		}
		res[i][j] = '\0';
		i++;
	}
	res[words] = NULL;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = ft_count_words(str, charset);
	res = malloc (sizeof (char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	res = ft_fill(res, str, charset, words);
	return (res);
}

/*
#include <stdio.h>

int	main()
{
	char    str[] = "split me all the way";
	char    sep[] = " ";
	char    **tab;
	int     i;

	tab = ft_split(str, sep);
	if (tab == NULL)
		return (1);
	i = 0;
	while (tab[i] != NULL)
	{
		printf("tab[%d] = %s\n", i, tab[i]);
		i++;
		}
		return (0);
}*/
