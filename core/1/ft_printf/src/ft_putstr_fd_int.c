/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd_int.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 19:27:15 by bteuling      #+#    #+#                 */
/*   Updated: 2022/05/30 19:28:06 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

// outputs string s to file descriptor(fd)
int	ft_putstr_fd_int(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}
