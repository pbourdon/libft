/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:59:25 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/02 20:33:41 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c1;
	char	*s1;
	int		a;

	s1 = (char *)s;
	c1 = (char)c;
	a = 0;
	while (s1[a] != '\0')
	{
		if (s1[a] == c)
			return (s1 + a);
		a++;
	}
	if (s1[a] == c)
		return (s1 + a);
	return (NULL);
}
