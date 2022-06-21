/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd_new.c                                 :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:41:12 by bteuling      #+#    #+#                 */
/*   Updated: 2022/06/21 15:14:52 by Boy Teulings     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Writes string to given file descriptor, and returns the amount of bytes written
 * 
 * @param s string to write
 * @param fd file descriptor to write to
 * @return int – amount of bytes written
 */
int	ft_putstr_fd(char *s, int fd)
{
	return (write(fd, s, ft_strlen(s)));
}
