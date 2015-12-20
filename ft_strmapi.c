/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:15:10 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/05 15:21:54 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	int		a;

	a = 0;
	if (s && f)
	{
		s2 = malloc(sizeof(char) * ft_strlen(s) + 1);
		if (s2)
		{
			while (s[a] != '\0')
			{
				s2[a] = f(a, s[a]);
				a++;
			}
			s2[a++] = '\0';
			return (s2);
		}
	}
	return (NULL);
}
