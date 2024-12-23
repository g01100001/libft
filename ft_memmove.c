/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:41:00 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/09 17:02:07 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cp;
	unsigned char	*s;

	cp = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (src == dest || n == 0)
		return (dest);
	if (src < dest)
	{
		while (n > 0)
		{
			n--;
			cp[n] = s[n];
		}
	}
	else
		ft_memcpy(cp, s, n);
	return (dest);
}
/*
int	main(void)
{
	char	source[] = "Power!";
	char	destination[] = "Create";

	ft_memmove(destination, source, 6);
	printf("%s\n", destination);
	return(0);
} */
//cp a block of memory to another.
//Difference of memmove and memcpy is specified size to copy
//while cpy just copies regardless of size(buffer) 
