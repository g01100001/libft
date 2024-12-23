/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:51:54 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	iterate;
	char	*pointer;

	pointer = (char *)s;
	iterate = 0;
	while (iterate < n)
	{
		pointer[iterate] = (size_t)c;
		iterate++;
	}
	return (s);
}
/*
int	main(void)
{
	char	string[42] = "howlongcanyoukeepup?";
	int	set = 42;

	printf("\nInitial string: %s\n", string);
	ft_memset(string, set, 7);
	printf("Changed to: %s\n", string);
	printf("Set to: Keep up!\n\n");
	return (0);
} */
//Typecasting i
