/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 16:36:47 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
/*
int	main(void)
{
	char	uppercase = 'L';
	char	lowercase;

	lowercase = ft_tolower(uppercase);
	printf("Changing %c to lowercase '%c'.\n", uppercase, lowercase);
	return (0);
} */
// Don't forget to check if variables are being declared.
// Functions can be written inside () as parameters.
// If not, declare a variable then equate to a function. 
// The same situation in "lowercase = ft_tolower(uppercase)".
// Again, ASCII 76 and character 'L' can be interchangable.
