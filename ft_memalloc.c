/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 18:48:48 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/05 19:16:15 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*new;

	new = malloc(size);
	if (new == NULL)
		return (NULL);
	else
	{
		ft_memset(new, 0, size);
		return (new);
	}
}
