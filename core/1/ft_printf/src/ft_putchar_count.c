/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_count.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: Boy Teulings <bteuling@student.codam.nl      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/17 17:46:56 by Boy Teuling   #+#    #+#                 */
/*   Updated: 2022/06/01 17:21:58 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// outputs char c on file descriptor(fd) and returns int of
// -characters written
int	ft_putchar_count(char c)
{
	return (write(1, &c, 1));
}
