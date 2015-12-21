/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 22:59:49 by pbourdon          #+#    #+#             */
/*   Updated: 2015/11/28 22:59:50 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	it;
	unsigned int	res;
	unsigned int	j;

	j = 0;
	it = ft_strlen(dst);
	res = ft_strlen(src) + it;
	if (size <= it || !size || !dst || !src)
		return (size + (res - it));
	while (it < size)
		dst[it++] = src[j++];
	it = it - 1;
	dst[it] = '\0';
	return (res);
}
