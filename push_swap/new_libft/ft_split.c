/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamlouk <ahamlouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:22:56 by ahamlouk          #+#    #+#             */
/*   Updated: 2026/10/20 12:23:49 by ahamlouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_count_word(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
		{
			while (*s && *s == c)
				s++;
		}
	}
	return (count);
}

static char	*ft_get_word(char const *s, char c)
{
	char	*word;
	int		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != c)
	{
		word[len] = s[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

static void	*ft_free(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		w_count;
	int		i;

	if (!s)
		return (NULL);
	w_count = ft_get_count_word(s, c);
	result = malloc(sizeof(char *) * (w_count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < w_count)
	{
		while (*s && *s == c)
			s++;
		result[i] = ft_get_word(s, c);
		if (!result[i])
			return (ft_free(result, i - 1));
		while (*s && *s != c)
			s++;
		i++;
	}
	result[i] = NULL;
	return (result);
}
