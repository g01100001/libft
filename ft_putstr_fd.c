/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 23:04:19 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void    ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}*/

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		ft_putchar_fd(s[i++], fd);
}
/*
int	main(void)
{
	char	str[] = "asterisky";

	ft_putstr_fd(str, 1);
	return (0);
} */
//prints a string with file descriptor
// 0 "stdin" used for input from the keyboard
// 1 "stdout" for output to terminal
// 2 "stderr" error messages and diagnostics
