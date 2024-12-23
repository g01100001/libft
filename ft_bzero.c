/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:09:02 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	iterate;
	char	*pointer;

	iterate = 0;
	pointer = (char *)s;
	while (iterate < n)
	{
		pointer[iterate] = 0;
		iterate++;
	}
}
/*
int	main(void)
{
	char	test[] = "It was bzero prior to using memset.";

	printf("Prior to truncation: %s\n", test);
	ft_bzero(test, 10);
	printf("After being truncated: %s\n", test);
	return(0);
} */
//Implicit typecasting from void *s to char *pointer
//Bzero has the same function with memset
//In memset, initialize the constant c to '0'
//but Bzero is now deprecated, according to the manual.
