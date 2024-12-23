/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 04:36:32 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*next;
	char	*source;

	if (!dest && !src)
		return (NULL);
	next = (char *) dest;
	source = (char *) src;
	i = 0;
	while (i < n)
	{
		next[i] = source[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	source[17] = "Copy memory area.";
	char	destination[17];

	ft_memcpy(destination, source, 17);
	printf("%s\n\n", destination);
	return (0);
}
*/
//Typecasting forces you to implicitly or explicitly convert data types.
//(Explicit or manual) may result to data loss if unchecked.