/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 22:17:59 by pbourdon          #+#    #+#             */
/*   Updated: 2015/11/28 22:55:17 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	a;
	unsigned char	*str_src;
	unsigned char	*str2_dest;
	unsigned char	x;

	str_src = (unsigned char *)src;
	str2_dest = (unsigned char *)dest;
	x = (unsigned char)c;
	a = 0;
	while (a < n)
	{
		str2_dest[a] = str_src[a];
		if (str_src[a] == x)
		{
			a++;
			return (str2_dest + a);
		}
		a++;
	}
	return (NULL);
}
