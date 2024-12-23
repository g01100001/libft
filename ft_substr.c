/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:30:30 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dstr;
	size_t			i;
	unsigned int	slen;

	i = 0;
	slen = ft_strlen(s);
	if (start > slen)
		return (ft_calloc(1, sizeof(char)));
	if (len > slen - start)
		len = slen - start;
	dstr = malloc(sizeof(char) * (len + 1));
	if (!dstr)
		return (NULL);
	while (i < len)
		dstr[i++] = s[start++];
	dstr[i] = '\0';
	return (dstr);
}
/*
int main(void)
{
	char *str = "It's a string";
	char *ft = ft_substr(str, 7, 6);
	
	if (ft)
	{
		printf("Substring: %s\n", ft);
		free(ft);  // Free allocated memory
	}
	return (0);
}
*/
/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	s_len;
	unsigned int	i;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (start >= s_len)
	{
		sub = malloc(1);
		if (sub)
			sub[0] = '\0';
		return (sub);
	}
	if (start + len > s_len)
		len = s_len - start;
	if (!(sub = malloc(len + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}
*/