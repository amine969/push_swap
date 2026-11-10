/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamlouk <ahamlouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 22:12:35 by ahamlouk          #+#    #+#             */
/*   Updated: 2026/10/25 14:32:16 by ahamlouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*temp_src;
	unsigned char			*temp_dst;

	if (src == dst)
		return (dst);
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (temp_dst > temp_src)
	{
		while (len > 0)
		{
			len--;
			temp_dst[len] = temp_src[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
