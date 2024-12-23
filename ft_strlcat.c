/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:38:34 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index_dest;
	size_t	index_source;
	size_t	iterate;

	index_dest = 0;
	index_source = 0;
	while (dst[index_dest] != '\0' && index_dest < size)
		index_dest++;
	while (src[index_source] != '\0')
		index_source++;
	if (size <= index_dest)
		return (index_source + size);
	iterate = 0;
	while (src[iterate] != '\0' && (index_dest + iterate + 1) < size)
	{
		dst[index_dest + iterate] = src[iterate];
		iterate++;
	}
	dst[index_dest + iterate] = '\0';
	return (index_dest + index_source);
}
/*
int	main(void)
{
	char	dst[] = "0000";
	const char src[] = "1111";
	size_t	size;

	size = sizeof(dst);
	printf("%zu\n", ft_strlcat(dst, src, size));
	return (0);
}
*/
