/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 23:48:56 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*memory;
	size_t	iterate;

	memory = (char *) s;
	iterate = 0;
	while (iterate < n)
	{
		if (memory[iterate] == (char) c)
			return (((char *) s) + iterate);
		iterate++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	test[] = "Black Sheep Wall";
	char	*result;

	result = (char *)ft_memchr(test, 'W', strlen(test));
	if (result != NULL)
	printf("'W' at position: %ld\n", result - test);
	return (0);
} */
/* The  memchr()  function  scans the initial n bytes of the memory area
   pointed to by s for the first instance of c. Both c and the bytes of
   the memory area pointed to by s are interpreted as char. */
//additional resources: ft_memchr.c 1337-Libft-42
//c/66f7d309-c378-8008-b004-cd95b0490266
