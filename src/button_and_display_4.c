/*
** EPITECH PROJECT, 2021
** button_and_display_4.c
** File description:
** button_and_display_4.c
*/

#include "my.h"

int display_enemy_2_2(map_run *info, map_pst *info_pst, clock_var *clock)
{
    int val = info->map_oth.enemy_2_2_act;
    sfTime t = sfClock_getElapsedTime(clock->enemy_2_2_act);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->map_oth.enemy_2_2_act == 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->enemy_2_2.x < -50) {
            info->map_oth.enemy_2_2_act = minus_var(val);
            info_pst->enemy_2_2.x = 1930;
            info_pst->enemy_2_2.y = rdm_number(720, 780);
        } else {
            info_pst->enemy_2_2.x -= 30;
        }
        sfClock_restart(clock->enemy_2_2_act);
    }
    return 0;
}

int display_enemy_3(map_run *info, map_pst *info_pst, clock_var *clock)
{
    int val = info->map_oth.enemy_3_act;
    sfTime t = sfClock_getElapsedTime(clock->enemy_3_act);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->map_oth.enemy_3_act == 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->pst_oth.enemy_3.x < -50) {
            info->map_oth.enemy_3_act = minus_var(val);
            info_pst->pst_oth.enemy_3.x = 1930;
        } else {
            info_pst->pst_oth.enemy_3.x -= 30;
        }
        sfClock_restart(clock->enemy_3_act);
    }
    return 0;
}

int display_enemy_4(map_run *info, map_pst *info_pst, clock_var *clock)
{
    int val = info->map_oth.enemy_4_act;
    sfTime t = sfClock_getElapsedTime(clock->enemy_4_act);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->map_oth.enemy_4_act == 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->pst_oth.enemy_4.x < -50) {
            info->map_oth.enemy_4_act = minus_var(info->map_oth.enemy_4_act);
            info_pst->pst_oth.enemy_4.x = 1930;
        } else {
            info_pst->pst_oth.enemy_4.x -= 30;
        }
        sfClock_restart(clock->enemy_4_act);
    }
    return 0;
}

int display_enemy_3_2(map_run *info, map_pst *info_pst, clock_var *clock)
{
    int val = info->map_oth.enemy_3_2_act;
    sfTime t = sfClock_getElapsedTime(clock->enemy_3_2_act);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->map_oth.enemy_3_2_act == 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->pst_oth.enemy_3_2.x < -50) {
            info->map_oth.enemy_3_2_act = minus_var(val);
            info_pst->pst_oth.enemy_3_2.x = 1930;
        } else {
            info_pst->pst_oth.enemy_3_2.x -= 30;
        }
        sfClock_restart(clock->enemy_3_2_act);
    }
    return 0;
}

int display_enemy_4_2(map_run *info, map_pst *info_pst, clock_var *clock)
{
    int val = info->map_oth.enemy_4_2_act;
    sfTime t = sfClock_getElapsedTime(clock->enemy_4_2_act);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->map_oth.enemy_4_2_act == 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->pst_oth.enemy_4_2.x < -50) {
            info->map_oth.enemy_4_2_act = minus_var(val);
            info_pst->pst_oth.enemy_4_2.x = 1930;
        } else {
            info_pst->pst_oth.enemy_4_2.x -= 30;
        }
        sfClock_restart(clock->enemy_4_2_act);
    }
    return 0;
}