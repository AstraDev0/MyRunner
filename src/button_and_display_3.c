/*
** EPITECH PROJECT, 2021
** button_and_display_3.c
** File description:
** button_and_display_3.c
*/

#include "my.h"

int dpy_g_n(map_run *info, map_pst *info_pst, pst_rect *rect, clock_var *ck)
{
    if (info->game_mode != 0)  {
        displ_sprite_map(info, info_pst, ck);
        return 0;
    }
    sfMusic_setVolume(info->music_menu, 0);
    anmt_dino(info, info_pst, rect, ck);
    if (info->map_oth.enemy_1_act > 0)
        anmt_enemy_1(info, rect, ck);
    if (info->map_oth.enemy_2_act > 0)
        anmt_enemy_2(info, rect, ck);
    if (info->map_oth.enemy_1_2_act > 0)
        anmt_enemy_1_2(info, rect, ck);
    if (info->map_oth.enemy_2_2_act > 0)
        anmt_enemy_2_2(info, rect, ck);
    jump_dino(info, info_pst, ck);
    displ_sprite_map(info, info_pst, ck);
    return 0;
}

int minus_var(int val)
{
    if (val != 0)
        return val - 1;
    return val;
}

int display_enemy_1(map_run *info, map_pst *info_pst, clock_var *clock)
{
    sfTime t = sfClock_getElapsedTime(clock->enemy_1_act);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->map_oth.enemy_1_act == 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->enemy_1.x < -50) {
            info->map_oth.enemy_1_act = minus_var(info->map_oth.enemy_1_act);
            info_pst->enemy_1.x = 1930;
            info_pst->enemy_1.y = rdm_number(800, 830);
        } else {
            info_pst->enemy_1.x -= 30;
        }
        sfClock_restart(clock->enemy_1_act);
    }
    return 0;
}

int display_enemy_2(map_run *info, map_pst *info_pst, clock_var *clock)
{
    sfTime t = sfClock_getElapsedTime(clock->enemy_2_act);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->map_oth.enemy_2_act == 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->enemy_2.x < -50) {
            info->map_oth.enemy_2_act = minus_var(info->map_oth.enemy_2_act);
            info_pst->enemy_2.x = 1930;
            info_pst->enemy_2.y = rdm_number(720, 780);
        } else {
            info_pst->enemy_2.x -= 30;
        }
        sfClock_restart(clock->enemy_2_act);
    }
    return 0;
}

int display_enemy_1_2(map_run *info, map_pst *info_pst, clock_var *clock)
{
    int val = info->map_oth.enemy_1_2_act;
    sfTime t = sfClock_getElapsedTime(clock->enemy_1_2_act);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->map_oth.enemy_1_2_act == 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->enemy_1_2.x < -50) {
            info->map_oth.enemy_1_2_act = minus_var(val);
            info_pst->enemy_1_2.x = 1930;
            info_pst->enemy_1_2.y = rdm_number(800, 830);
        } else {
            info_pst->enemy_1_2.x -= 30;
        }
        sfClock_restart(clock->enemy_1_2_act);
    }
    return 0;
}