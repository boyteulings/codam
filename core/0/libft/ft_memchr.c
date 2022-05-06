/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:40:52 by bteuling      #+#    #+#                 */
/*   Updated: 2022/05/06 18:01:28 by Boy Teulings     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// locates the first occurrence of c (converted to unsigned char) in s
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
			return (&((char *)s)[i]);
		i++;
		n--;
	}
	return (0);
}
