/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_flag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamlouk <ahamlouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:22:54 by ahamlouk          #+#    #+#             */
/*   Updated: 2026/11/10 11:23:18 by ahamlouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    ft_init_flag(t_flag *flag)
{
    flag->adaptive = 1;
    flag->simple = 0;
    flag->medium = 0;
    flag->complex = 0;
}
