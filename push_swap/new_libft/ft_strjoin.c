/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamlouk <ahamlouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:20:39 by ahamlouk          #+#    #+#             */
/*   Updated: 2026/10/25 08:56:32 by ahamlouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_check(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (ft_strdup(""));
	else if (!s1)
		return (ft_strdup(s2));
	return (ft_strdup(s1));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	t_len;

	if (!s1 || !s2)
		return (ft_check(s1, s2));
	t_len = ft_strlen(s1);
	t_len += ft_strlen(s2) + 1;
	new = ft_calloc(t_len, sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcat(new, s1, t_len);
	ft_strlcat(new, s2, t_len);
	return (new);
}
