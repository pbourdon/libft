/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:23:46 by pbourdon          #+#    #+#             */
/*   Updated: 2015/11/30 17:01:35 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		a;
	int		test;

	test = 1;
	a = 0;
	if (!s1 && !s2)
		return (test);
	if (!s1 || !s2)
		return (0);
	while (s1[a] != '\0' && s2[a] != '\0' && n > 0)
	{
		if (s1[a] != s2[a])
			return (0);
		a++;
		n--;
	}
	return (test);
}
