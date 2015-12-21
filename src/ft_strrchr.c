/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:08:38 by pbourdon          #+#    #+#             */
/*   Updated: 2015/11/27 17:35:16 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*str;
	char	cara;

	cara = (char)c;
	str = (char *)s;
	a = 0;
	while (str[a] != '\0')
		a++;
	while (a >= 0)
	{
		if (str[a] == cara)
			return (str + a);
		a--;
	}
	return (NULL);
}
