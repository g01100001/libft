/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:37:13 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	digit = '3';
	char	more = '1';

	printf("%c is a digit = %d.\n", digit, ft_isdigit(digit));
	printf("%c is a digit. = %d.\n", more, ft_isdigit(more));
	return(0);
} */
/* Always check the set of numbers whether it is ASCII or Number '1' */
/*
#include <stdio.h>

int     ft_isdigit(int c)
{
        if (c >= 0 && c <= 9)
                return (1);
        return (0);
}

int     main(void)
{
        int     digit = 3;
        int     more = 1;

        printf("%d is a digit. = %d.\n", digit, ft_isdigit(digit));
        printf("%d is a digit. = %d.\n", more, ft_isdigit(more));
        return(0);
}
*/
