/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamlouk <ahamlouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 22:16:24 by ahamlouk          #+#    #+#             */
/*   Updated: 2026/10/20 10:49:08 by ahamlouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			t;
	size_t			i;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	t = size * count;
	if (!t)
		t = 1;
	temp = malloc(t);
	if (!temp)
		return (NULL);
	i = 0;
	while (i < t)
	{
		temp[i] = 0;
		i++;
	}
	return ((void *)temp);
}
