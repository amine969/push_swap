#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_flag
{
    int     simple;
    int     medium;
    int     complex;
    int     adaptive;
}   t_flag;

int     valid_flag(char *s, t_flag *flag);
int     ft_atoi(const char *str);
int     ft_check_int(char *s);
int     ft_duparg(int *tab, int size, int n);
int     *get_arg(int *size, int ac, char **av, t_flag *flag);
void    ft_init_flag(t_flag *flag);
int     ft_isdigit(int c);
int     valid_flag(char *s, t_flag *flag);
int	    ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char *s, int fd);

#endif