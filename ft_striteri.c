/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:06:52 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 17:20:19 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Similar to string mapi, since MAPI saves the original and outputs a string. 
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	itr;

	itr = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[itr] != '\0')
	{
		f(itr, &s[itr]);
		itr++;
	}
}
/*
void	ft_toupper1(unsigned int a, char* b)
{
	if (*b >= 'a' && *b <= 'z')
		*b = *b - ('a' - 'A');
}

int	main(void)
{
	char str[] = "iteration*iteration";

	ft_striteri(str, ft_toupper1); //apply to function ft_toupper.c
	printf("%s\n", str); //after function, set to UPPERCASE
	return (0);
}
*/