/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:35:19 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/05 18:41:23 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int				a;
	unsigned long	b;

	b = 0;
	a = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0' && b < n)
	{
		s1[a] = s2[b];
		b++;
		a++;
	}
	s1[a] = '\0';
	return (s1);
}
