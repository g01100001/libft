/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:27:38 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	print = 127;
	
	printf("Space(32) to Tilde(126) are printables. Thus, ");
	printf("%d has a return value of %d.\n", print, ft_isprint(print));
	return(0);
}*/
//ASCII space(32) to tilde(126) are printables.
