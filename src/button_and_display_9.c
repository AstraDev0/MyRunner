/*
** EPITECH PROJECT, 2021
** button_and_display_9.c
** File description:
** button_and_display_9.c
*/

#include "my.h"

void set_pst_sprite_next(map_pst *info_pst, sfVector2f x_y)
{
    sfVector2f floor_x_y = {0, 950};
    sfVector2f floor_copy_x_y = {1920, 950};
    sfVector2f x_y_enemy_3_4_e = {1930, 825};
    info_pst->pst_bgd_5 = x_y;
    info_pst->pst_floor = floor_x_y;
    info_pst->pst_floor_copy = floor_copy_x_y;
    info_pst->pst_oth.enemy_3 = x_y_enemy_3_4_e;
    info_pst->pst_oth.enemy_4 = x_y_enemy_3_4_e;
    info_pst->pst_oth.enemy_3_2 = x_y_enemy_3_4_e;
    info_pst->pst_oth.end_game = x_y_enemy_3_4_e;
    x_y_enemy_3_4_e.y = 860;
    info_pst->pst_oth.enemy_4_2 = x_y_enemy_3_4_e;
}

void set_pst_sprite(map_pst *info_pst)
{
    sfVector2f x_y = {0, 0};
    sfVector2f x_y_2 = {1920, 0};
    sfVector2f x_y_dino = {300, 830};
    sfVector2f x_y_enemy = {1930, 830};
    info_pst->pst_bgd_1 = x_y;
    info_pst->pst_bgd_5_copy = x_y_2;
    info_pst->pst_dino = x_y_dino;
    info_pst->enemy_1 = x_y_enemy;
    info_pst->enemy_2 = x_y_enemy;
    info_pst->enemy_1_2 = x_y_enemy;
    info_pst->enemy_2_2 = x_y_enemy;
    info_pst->enemy_1.y = rdm_number(800, 830);
    info_pst->enemy_2.y = rdm_number(720, 780);
    info_pst->enemy_1_2.y = rdm_number(800, 830);
    info_pst->enemy_2_2.y = rdm_number(720,  780);
    set_pst_sprite_next(info_pst, x_y);
}

void init_sprite(map_run *info)
{
    info->background_1 = sfSprite_create();
    info->background_5_copy = sfSprite_create();
    info->background_5 = sfSprite_create();
    info->floor = sfSprite_create();
    info->floor_copy = sfSprite_create();
    info->dino = sfSprite_create();
}

void edit_position_next_2(map_run *info, map_pst *info_pst)
{
    if (info_pst->pst_floor.x >= -1890)
        info_pst->pst_floor.x = info_pst->pst_floor.x - 30;
    else
        info_pst->pst_floor.x = 1890;
    if (info_pst->pst_floor_copy.x >= -1890)
        info_pst->pst_floor_copy.x = info_pst->pst_floor_copy.x - 30;
    else
        info_pst->pst_floor_copy.x = 1890;
    sfSprite_setPosition(info->background_5, info_pst->pst_bgd_5);
    sfSprite_setPosition(info->background_5_copy, info_pst->pst_bgd_5_copy);
    sfSprite_setPosition(info->floor, info_pst->pst_floor);
    sfSprite_setPosition(info->floor_copy, info_pst->pst_floor_copy);
}

int edit_position(map_run *info, map_pst *info_pst, clock_var *clock)
{
    sfTime t = sfClock_getElapsedTime(clock->bgd_1);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (info->game_mode != 0)
        return 0;
    if (time > (sfInt32)(1) && info->menu == 0) {
        if (info_pst->pst_bgd_5.x >= -1912)
            info_pst->pst_bgd_5.x = info_pst->pst_bgd_5.x - 8;
        else
            info_pst->pst_bgd_5.x = 1912;
        if (info_pst->pst_bgd_5_copy.x >= -1912)
            info_pst->pst_bgd_5_copy.x = info_pst->pst_bgd_5_copy.x - 8;
        else
            info_pst->pst_bgd_5_copy.x = 1912;
        edit_position_next_2(info, info_pst);
        sfClock_restart(clock->bgd_1);
    }
    return 0;
}