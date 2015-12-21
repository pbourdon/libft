/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 21:39:20 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/05 15:43:58 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		a;
	char	*str;
	int		len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (len + 1) + 1);
	if (str == NULL)
		return (NULL);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	a = -1;
	while (s[++a] == ' ' || s[a] == '\t' || s[a] == '\n')
		len--;
	if (len <= 0)
		len = 0;
	s = s + a;
	a = -1;
	while (++a < len)
		str[a] = *s++;
	str[a] = '\0';
	return (str);
}
