/*
** EPITECH PROJECT, 2021
** button_and_display_5.c
** File description:
** button_and_display_5.c
*/

#include "my.h"

int display_end_game(map_run *info, map_pst *info_pst, clock_var *clock)
{
    int val = info->map_oth.end_game_act;
    sfTime t = sfClock_getElapsedTime(clock->c_oth.end_game_act);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->map_oth.end_game_act == 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->pst_oth.end_game.x < -50) {
            info->map_oth.end_game_act = minus_var(val);
            info_pst->pst_oth.end_game.x = 1930;
        } else {
            info_pst->pst_oth.end_game.x -= 30;
        }
        sfClock_restart(clock->c_oth.end_game_act);
    }
    return 0;
}

void value_act(map_run *info)
{
    if (info->map_oth.enemy_1_act > info->map_oth.enemy_1_2_act)
        info->map_oth.enemy_1_2_act += 1;
    else
        info->map_oth.enemy_1_act += 1;
}

void value_act_2(map_run *info)
{
    if (info->map_oth.enemy_2_act > info->map_oth.enemy_2_2_act)
        info->map_oth.enemy_2_2_act += 1;
    else
        info->map_oth.enemy_2_act += 1;
}

void next_value_act_3(map_run *info, int v, char **array)
{
    if (v != 0)
        if (array[v - 1] == array[v])
            v = rdm_number(v - 1, v);
    if (v != 3)
        if (array[v + 1] == array[v])
            v = rdm_number(v, v + 1);
    if (v == 0)
        info->map_oth.enemy_3_act += 1;
    if (v == 1)
        info->map_oth.enemy_3_2_act += 1;
    if (v == 2)
        info->map_oth.enemy_4_act += 1;
    if (v == 3)
        info->map_oth.enemy_4_2_act += 1;
}

void value_act_3(map_run *info)
{
    int v = 0;
    char **array = malloc(sizeof(char *) * 4);

    array[0] = malloc(sizeof(char));
    array[1] = malloc(sizeof(char));
    array[2] = malloc(sizeof(char));
    array[3] = malloc(sizeof(char));
    array[0][0] = info->map_oth.enemy_3_act + '0';
    array[1][0] = info->map_oth.enemy_3_2_act + '0';
    array[2][0] = info->map_oth.enemy_4_act + '0';
    array[3][0] = info->map_oth.enemy_4_2_act + '0';
    for (int i = 0; i <= 3; i++)
        if (array[v] >= array[i])
            v = i;
    next_value_act_3(info, v, array);
    free(array);
}
