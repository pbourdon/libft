/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 22:59:20 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/05 14:52:20 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	car;
	int				i;

	car = (unsigned char)c;
	str = (unsigned char*)s;
	i = 0;
	while (n--)
	{
		if (str[i] == car)
			return (str + i);
		i++;
	}
	return (NULL);
}
