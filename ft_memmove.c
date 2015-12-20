/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:51:19 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/05 14:51:10 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char	*str;

	str = (unsigned char*)malloc(sizeof(*str) * n);
	ft_memcpy(str, s2, n);
	ft_memcpy(s1, str, n);
	free(str);
	return (s1);
}
