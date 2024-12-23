/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:50:34 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*string;
	size_t	total;

	total = nmemb * size;
	string = (char *)malloc(total);
	if (!string)
		return (NULL);
	ft_bzero(string, total);
	return (string);
}
/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	char	*string;
	
	if (size != '\0' && nmemb >= SIZE_MAX / size)
		return (0);
	total = (nmemb * size);
	pointer = (char *)malloc(total);
	if (pointer == 0)
		return (0);
	else {
		ft_bzero(pointer, total);
		return (pointer);
	}
}
//or use a memset to initialize the allocated memory to zero
*//*
int	main(void)
{
	char	*local;
	char	*system;

	local = (char *)ft_calloc(40, 20);
	system = (char *)calloc(40, 20);
	printf("\nLocal Function: %s\n", local);
	free (local);
	printf("System Function: %s\n", system);
	free (system);
	return (0);
}*/
