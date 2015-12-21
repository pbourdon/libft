/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:02:14 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/05 14:53:45 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int	a;

	a = ft_strlen(src);
	if (a >= n)
		ft_memcpy(dst, src, n);
	else
	{
		ft_memcpy(dst, src, a);
		ft_memset(dst + a, '\0', n - a);
	}
	return (dst);
}
