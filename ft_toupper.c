/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:10:08 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
/*
int	main(void)
{
	char	alphabet = 'g';

	ft_toupper(alphabet);
	printf("Changing the lowercase letter ");
	printf("%c to upppercase letter '%c'.\n", alphabet, ft_toupper(alphabet));
	return (0);
} */
/* Using %c instead of %d to indicate that it is a character (even in ASCII)
   and not an integer (int) */
// in the variable alphabet, you can use both
// ASCII and letters by using ASCII digits and 'c' apostrophe for characters.
// if the return (c); then it'll print whatever c is, as set parameter.
// But if return (0); then it will print null or nothing.
