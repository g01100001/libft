/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:46:43 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/09 01:32:12 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*trim;

	i = 0;
	j = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	if (j < i)
	{
		trim = ft_strdup("");
	}
	else
	{
		trim = ft_substr(s1, i, j - i + 1);
	}
	return (trim);
}
/*
int	main(void)
{
	char a[] = "ghjk hola busco a lolagh jk";
	char b[] = " ghjk";
	char *c;

	c = ft_strtrim(a, b);
	printf("%s", c);
	free(c);
	return (0);
}
*/
