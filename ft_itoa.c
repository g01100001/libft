/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:50:25 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/09 19:54:58 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* "Integer" to "string" conversxn, if negative include '-' sign.
 "nbrlen" determines number of digit integers

 */

#include "libft.h"

static size_t	ft_nbrlen(int nbr)
{
	long	nb;
	size_t	length;

	length = 1;
	nb = (long)nbr;
	if (nb < 0)
	{
		length++;
		nb *= -1;
	}
	while (nb >= 10)
	{
		length++;
		nb /= 10;
	}
	return (length);
}

static void	ft_converter(char *str, long nbr, size_t len)
{
	size_t	i;

	i = 1;
	while (nbr >= 10)
	{
		str[len - i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	str[len - i] = nbr + '0';
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nbr;
	char	*str;

	len = ft_nbrlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	nbr = (long)n;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	ft_converter(str, nbr, len);
	return (str);
}
/*
int	main(void)
{
	int	test1 = 42;
	int    test2 = -42;
	long    test3  = +2100004242;
	int    test4 = 000;
	int    test5 = 1*42/42*42;

	printf("Integer: %d\nString: %s\n\n", test1, ft_itoa(test1));
	printf("Integer: %d\nString: %s\n\n", test2, ft_itoa(test2));
	printf("Integer: %ld\nString: %s\n\n", test3, ft_itoa(test3));
	printf("Integer: %d\nString: %s\n\n", test4, ft_itoa(test4));
	printf("Integer: %d\nString: %s\n\n", test5, ft_itoa(test5));
	return (0);
}
*/
//c/6706b21e-69e8-8008-803a-f57bd84f0551
