/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:52:30 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	length;
	size_t	i;
	char	*dup;

	length = ft_strlen(s);
	dup = (char *)malloc((length + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < length)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*int	main(void)
{
	char	*str1 = "";
	char	*dup1 = ft_strdup(str1);

	printf("Original: %s and Duplicate: %s\n", str1, dup1);
	free (dup1);

	char	*str2 = "Lisan al-Gaib.";
	char	*dup2 = strdup(str2);

	printf("Original: %s and Duplicate: %s\n", str2, dup2);
	free (dup2);
}
*/