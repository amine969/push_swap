/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamlouk <ahamlouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:19:55 by ahamlouk          #+#    #+#             */
/*   Updated: 2026/11/10 12:08:25 by ahamlouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int     valid_flag(char *s, t_flag *flag)
{
    char *flags[4];

    flags[0] = "--adaptive";
    flags[1] = "--simple";
    flags[2] = "--medium";
    flags[3] = "--complex";
    if (!ft_strncmp(s, flags[0], 10))
        flag->adaptive = 1;
    else if (!ft_strncmp(s, flags[1], 8))
        flag->simple = 1;
    else if (!ft_strncmp(s, flags[2], 8))
        flag->medium = 1;
    else if (!ft_strncmp(s, flags[3], 9))
        flag->complex = 1;
    else
        return (0);
    if (flag->simple == 1 && flag->medium == 1)
        return (0);
    else if (flag->simple == 1 && flag->complex == 1)
        return (0);
    else if (flag->medium == 1 && flag->complex == 1)
        return (0);
    return (1);
}
