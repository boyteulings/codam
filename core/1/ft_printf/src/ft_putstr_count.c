/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_count.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/05/30 19:27:15 by bteuling      #+#    #+#                 */
/*   Updated: 2022/06/01 17:24:59 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// outputs string s to file descriptor(fd)
int	ft_putstr_count(char *s)
{
	int	i;

	i = 0;
	//if (!s)
	//	return ;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
