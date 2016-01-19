/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:23:09 by pbourdon          #+#    #+#             */
/*   Updated: 2015/11/28 22:49:20 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	a;
	unsigned char	*y;

	a = 0;
	if (len == 0)
		return (b);
	y = (unsigned char *)b;
	while (a < len)
	{
		y[a] = (unsigned char)c;
		a++;
	}
	return (b);
}
