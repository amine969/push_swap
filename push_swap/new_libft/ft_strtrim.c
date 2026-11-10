/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamlouk <ahamlouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:23:06 by ahamlouk          #+#    #+#             */
/*   Updated: 2026/10/25 09:24:42 by ahamlouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;

	if (!s1 || !set)
		return (NULL);
	e = ft_strlen(s1);
	s = 0;
	while (s < e)
	{
		if (!ft_check(set, s1[s]))
			break ;
		s++;
	}
	while (e > 0)
	{
		if (!ft_check(set, s1[e - 1]))
			break ;
		e--;
	}
	return (ft_substr(s1, s, e - s));
}
