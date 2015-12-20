/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:36:44 by pbourdon          #+#    #+#             */
/*   Updated: 2015/11/28 18:54:14 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				nbr;
	int				a;

	a = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	nbr = (int)n;
	while (a < nbr)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		else
			a++;
	}
	return (0);
}
