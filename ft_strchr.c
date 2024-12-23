/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:30:49 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	const char test[30] = "c c# d eb e f f# g g# a bb b";
	char	occurrence1 = 'g';

	printf("System function: %s\n", strchr(test, occurrence1));
	printf("Local function: %s\n", ft_strchr(test, occurrence1));
	return (0);
} */
//What's the purpose of accessing the memory address,
//	and accessing the value on that address?
//
//Typecasting is converting the value of one data type to another.
//Implicit type of conversion. </> "(type_name) expression"
//
// (char *) &s[count] lets you accesss declared const char *s,
// with an assigned memory
/*
 char    *ft_strchr(const char *s, int c)
{
        int     count;

        count = 0;
        while (s[count] != c && s[count] != '\0')
                count++;
        if (s[count] == '\0')
                return (0);
        else
                return ((char *)(s + count));
}
*/
