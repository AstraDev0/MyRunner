/*
** EPITECH PROJECT, 2021
** my_itoa.c
** File description:
** my_itoa.c
*/

#include "my.h"

char *my_itoa(int num)
{
    int nbr_length = my_intlen(num);
    char *str = malloc(sizeof(char) * (nbr_length + 1));
    int len;

    if (num == 0)
        return "0";
    str[nbr_length] = '\0';
    nbr_length--;
    for (nbr_length; nbr_length >= 0; nbr_length--) {
        str[nbr_length] = num % 10 + 48;
        num = num / 10;
    }
    return (str);
}