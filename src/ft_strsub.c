/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:27:23 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/05 15:25:41 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new;
	int				a;
	int				len2;

	a = 0;
	len2 = (int)len;
	new = malloc(sizeof(char) * len + 1);
	if (new == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	while (a < len2 && s[start] != '\0')
	{
		new[a] = s[start];
		a++;
		start++;
	}
	new[a] = '\0';
	return (new);
}
