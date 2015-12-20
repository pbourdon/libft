/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbourdon <pbourdon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:46:30 by pbourdon          #+#    #+#             */
/*   Updated: 2015/12/04 15:49:30 by pbourdon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static		size_t		count_words(char const *s, char c)
{
	size_t	a;
	size_t	nbr_word;

	nbr_word = 0;
	a = 0;
	while (s[a])
	{
		while (s[a] == c)
			a++;
		if (s[a] != c && s[a])
		{
			nbr_word++;
			a++;
			while (s[a] != c && s[a] != '\0')
				a++;
		}
	}
	return (nbr_word);
}

static		char		*add_word(char const *s, char c, size_t *a2)
{
	char	*word;
	size_t	last_char_of_word;
	size_t	current_char;

	last_char_of_word = *a2;
	current_char = 0;
	while (s[last_char_of_word] != '\0' && s[last_char_of_word] != c)
		last_char_of_word++;
	word = ft_memalloc(last_char_of_word - *a2 + 1);
	if (word)
	{
		while (*a2 < last_char_of_word)
		{
			word[current_char] = s[*a2];
			current_char++;
			*a2 = *a2 + 1;
		}
		return (word);
	}
	return (0);
}

char					**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	nbr_word2;
	size_t	*a2;
	size_t	a3;

	nbr_word2 = 0;
	a3 = 0;
	a2 = &a3;
	tab = NULL;
	if (s)
		tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (tab)
	{
		while (nbr_word2 < count_words(s, c))
		{
			while (s[*a2] != '\0' && s[*a2] == c)
				*a2 = *a2 + 1;
			if (s[*a2] != c && s[*a2] != '\0')
				tab[nbr_word2++] = add_word(s, c, a2);
		}
		tab[nbr_word2] = 0;
		return (tab);
	}
	return (NULL);
}
