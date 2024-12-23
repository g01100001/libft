/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:49:28 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/14 01:58:00 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_all(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free (res);
}

int	ft_wordcount(char const *s, char c)
{
	int	n_elements;
	int	i;
	int	words;

	n_elements = 0;
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && !words)
		{
			words = 1;
			n_elements++;
		}
		if (s[i] == c && words)
			words = 0;
		i++;
	}
	return (n_elements);
}

char	*ft_assign_word(int i, char const *s, char c)
{
	int		n;
	int		start;
	char	*word;

	n = 0;
	start = 0;
	while (s[i + n] != c && s[i + n])
		n++;
	word = (char *)malloc((n + 1) * sizeof(char));
	if (!word)
	{
		return (NULL);
	}
	while (start < n)
	{
		word[start] = s[i + start];
		start++;
	}
	word[start] = '\0';
	return (word);
}

int	ft_allocate_words(char **res, int size, char const *s, char c)
{
	int	is_word;
	int	i;
	int	j;

	i = 0;
	is_word = 0;
	j = 0;
	while (j < size)
	{
		if (s[i] != c && !is_word)
		{
			is_word = 1;
			res[j] = ft_assign_word(i, s, c);
			if (!res[j])
			{
				ft_free_all(res);
				return (0);
			}
			j++;
		}
		if (s[i] == c && is_word)
			is_word = 0;
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		n_elements;
	char	**res;

	if (!s)
		return (NULL);
	n_elements = ft_wordcount(s, c);
	res = (char **)malloc((n_elements + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (!ft_allocate_words(res, n_elements, s, c))
		return (NULL);
	res[n_elements] = NULL;
	return (res);
}
/*
int	main(void)
{
	char	**result;
	int	i;

	result =
	ft_split("The 'space' character is the delimiter for ft_split.c test.", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("String %d: %s\n", i, result[i]);
		i++;
	}
	free (result);
	return (0);
}
*/
