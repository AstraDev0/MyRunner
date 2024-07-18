/*
** EPITECH PROJECT, 2021
** my_intlen.c
** File description:
** my_intlen.c
*/

#include "my.h"

int my_intlen(int num)
{
    int len;

    for (len = 0; num != 0; len++)
        num = num / 10;
    return len;
}