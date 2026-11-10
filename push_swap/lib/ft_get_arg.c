/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamlouk <ahamlouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:21:42 by ahamlouk          #+#    #+#             */
/*   Updated: 2026/11/10 11:55:44 by ahamlouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int     *get_arg(int *size, int ac, char **av, t_flag *flag)
{
    int     *tab;
    int     temp;
    int     i;

    tab = malloc(sizeof(int) * ac);
    if (!tab)
        return (NULL);
    i = 0;
    while (i < ac)
    {
        if (ft_check_int(av[i]))
        {
            
            temp = ft_atoi(av[i]);
            if (!ft_duparg(tab, *size, temp))
                return (free(tab), NULL);
            tab[*size] = temp;
            (*size)++;
        } else if (!valid_flag(av[i], flag))
            return (free(tab), NULL);
        i++;
    }
    return (tab);
}