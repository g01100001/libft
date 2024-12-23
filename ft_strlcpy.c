/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 23:53:52 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	src_length;

	src_length = 0;
	counter = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size > 0)
	{
		while (counter < size - 1 && src[counter] != '\0')
		{
			dst[counter] = src[counter];
			counter++;
		}
		dst[counter] = '\0';
	}
	return (src_length);
}
/*
int	main(void)
{
	char	test_src[] = "strlcpy";
	char	test_dest[10];
	size_t	maxlength = '8';

	printf("Source: %s\n",test_src);
	printf("Source length: %zu\n", ft_strlcpy(test_dest, test_src, maxlength));
	printf("Destination: %s\n", test_dest);

	return (0);
}
*/
//Diagram: src > ft_strlcpy > dst
//Copies string from src to dst with a maximum size
//Returns length of src
//https://chatgpt.com/share/66f0c1a1-47bc-8008-98d5-bad1f8269ea2
