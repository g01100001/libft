/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:50:38 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter])
	{
		counter++;
	}
	return (counter);
}
/*
int	main(void)
{
	const char	cc[8] = "onezero";
	unsigned int	length;

	length = ft_strlen(cc);
	printf("The string is %s. Moreover, ", cc);
	printf("this sentence %s is %d.\n", cc, length);
	printf("The first 3 characters of the string are %.3s.\n", cc);
	return (0);
}
*/