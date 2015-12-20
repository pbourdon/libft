/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:39:33 by pbourdon          #+#    #+#             */
/*   Updated: 2015/11/30 21:41:33 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		test2(char *str1, char *str2, int nbr)
{
	int		a;
	int		test;

	test = 1;
	a = 0;
	while (a < nbr)
	{
		if (str1[a] != str2[a])
			return (0);
		a++;
	}
	return (test);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		a;
	int		c;
	int		b;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	a = 0;
	c = ft_strlen(str2);
	b = 0;
	if (!*str2)
		return (str1);
	while (str1[a] != '\0' && (int)n-- >= c)
	{
		if (str1[a] == str2[b])
			if (test2(str1 + a, str2, c) == 1)
				return (str1 + a);
		a++;
	}
	return (NULL);
}
