/*
** EPITECH PROJECT, 2021
** button_and_display_10.c
** File description:
** button_and_display_10.c
*/

#include "my.h"

void clock_funtion_next(clock_var *clock)
{
    clock->c_oth.map_block = sfClock_create();
    clock->enemy_3 = sfClock_create();
    clock->enemy_3_2 = sfClock_create();
    clock->enemy_4 = sfClock_create();
    clock->enemy_4_2 = sfClock_create();
    clock->enemy_3_act = sfClock_create();
    clock->enemy_3_2_act = sfClock_create();
    clock->enemy_4_act = sfClock_create();
    clock->enemy_4_2_act = sfClock_create();
    clock->c_oth.end_game = sfClock_create();
    clock->c_oth.end_game_act = sfClock_create();
}

void clock_funtion(clock_var *clock)
{
    clock->bgd_1 = sfClock_create();
    clock->dino = sfClock_create();
    clock->enemy_1 = sfClock_create();
    clock->enemy_1_act = sfClock_create();
    clock->enemy_2 = sfClock_create();
    clock->enemy_2_act = sfClock_create();
    clock->enemy_1_2 = sfClock_create();
    clock->enemy_1_2_act = sfClock_create();
    clock->enemy_2_2 = sfClock_create();
    clock->enemy_2_2_act = sfClock_create();
    clock->c_oth.score = sfClock_create();
    clock->c_oth.limit = 120;
    clock_funtion_next(clock);
}

void def_active(map_pst *info_pst, map_run *info)
{
    info_pst->dino_jump = 0;
    info_pst->dino_lower = 0;
    info_pst->dino_pst_act = 0;
    info->map_oth.enemy_1_act = 0;
    info->map_oth.enemy_2_act = 0;
    info->map_oth.enemy_1_2_act = 0;
    info->map_oth.enemy_2_2_act = 0;
    info->map_oth.enemy_3_act = 0;
    info->map_oth.enemy_4_act = 0;
    info->map_oth.enemy_3_2_act = 0;
    info->map_oth.enemy_4_2_act = 0;
    info->map_block = 0;
    info->map_oth.end_game_act = 0;
    info->game_mode = 0;
    info_pst->score_restart = 0;
}

void active_home(map_run *info, map_pst *info_pst)
{
    info->menu = 1;
    info->map_oth.play_menu = 1;
    info_pst->pst_oth.menu_2 = 0;
}

void record_start(map_run *info, map_pst *info_pst)
{
    FILE *file;
    if (file = fopen("record.txt", "r"))  {
        fclose(file);
        info_pst->record = my_getnbr(read_file("record.txt"));
    } else {
        info_pst->record = 0;
        file = fopen("record.txt", "a");
    }
}