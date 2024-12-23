/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:47:01 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/09 20:02:22 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*area1;
	unsigned char	*area2;

	if (n == 0)
		return (0);
	area1 = (unsigned char *) s1;
	area2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (area1[i] != area2[i])
			return (area1[i] - area2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_memcmp("xxx", "xxz", 3));
	printf("%d\n", ft_memcmp("xxx", "xxy", 3));
	return (0);
}
*/
//We use memory to compare string.
