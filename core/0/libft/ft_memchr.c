/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:40:52 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:40:52 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long			i;
	const unsigned char		*cs;
	unsigned char			cc;

	cs = s;
	cc = c;
	i = 0;
	while (n > 0)
	{
		if (cs[i] == cc)
			return ((char *)&s[i]);
		i++;
		n--;
	}
	return (0);
}
