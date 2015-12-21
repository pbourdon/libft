/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/21 07:22:58 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/21 07:35:17 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, int n)
{
	char	*str;
	int		index;
	int		index2;

	index = 0;
	index2 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	while (s1[index] != '\0' && index <= n)
	{
		str[index] = s1[index];
		index++;
	}
	while (s2[index2] != '\0' && index < n)
	{
		str[index] = s2[index2];
		index++;
		index2++;
	}
	str[index] = '\0';
	return (str);
}
