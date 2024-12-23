/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 22:28:12 by gomandam          #+#    #+#             */
/*   Updated: 2024/10/07 16:48:20 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	asterisk;
	int	file_dscrptr;

	asterisk = 42;
	file_dscrptr = 1;
	ft_putchar_fd(asterisk,file_dscrptr);
	return (0);
} */
//prints a character  with file descriptor
// 0 "stdin" used for input from the keyboard
// 1 "stdout" for output to terminal
// 2 "stderr" error messages and diagnostics
