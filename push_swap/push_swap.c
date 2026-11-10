#include "push_swap.h"

int     main(int ac, char **av)
{
    t_flag  flag;
    int     *tab;
    int     size;

    if (ac == 1)
        return (0);
    size = 0;
    ft_init_flag(&flag);
    tab = get_arg(&size, ac - 1, av + 1, &flag);
    if (!tab)
        return (ft_putstr_fd("Error\n", 2), 0);
}