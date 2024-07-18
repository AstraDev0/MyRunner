/*
** EPITECH PROJECT, 2021
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include "my.h"
#include <stddef.h>

int result_for_nbr(int variable, int mult, char const *str)
{
    while (*str != 0 && *str >= '0' && *str <= '9') {
        variable = variable * 10;
        variable = variable + *str - 48;
        str = str + 1;
    }
    variable = variable * mult;
    return (variable);
}

int my_getnbr(char const *str)
{
    int	variable;
    int	i;
    int	mult;

    i = 0;
    variable = 0;
    mult = 1;
    if (str == NULL)
        return (-1);
    while ((*str < '0' || *str > '9') && *str != 0) {
        str = str + 1;
        i = i + 1;
    }
    if (i > 0 && *(str - 1) == '-')
        mult = -1;
    return (result_for_nbr(variable, mult, str));
}
