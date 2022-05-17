/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Boy Teulings <bteuling@student.codam.nl>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 17:46:56 by Boy Teulings      #+#    #+#             */
/*   Updated: 2022/05/17 19:17:49 by Boy Teulings     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// outputs char c on file descriptor(fd) and returns int of
// -characters written
int	ft_putchar_fd_int(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
