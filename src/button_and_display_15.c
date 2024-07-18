/*
** EPITECH PROJECT, 2021
** button_and_display_15.c
** File description:
** button_and_display_15.c
*/

#include "my.h"

void dino_jump_check(sfEvent event, map_pst *info_pst)
{
    if (event.key.code == sfKeySpace && info_pst->dino_jump == 0)
        info_pst->dino_jump = 1;
    if (event.key.code == sfKeyUp && info_pst->dino_jump == 0)
        info_pst->dino_jump = 1;
}

void quit_game(map_pst *info_pst, map_run *info)
{
    info->menu = 1;
    set_pst_sprite(info_pst);
    def_active(info_pst, info);
}

void collision_crow_n(sfVector2f dino, map_pst *info_pst, map_run *info)
{
    int y_l = 80;
    int x_left = 50;
    int y_r = 70;
    int x_right = 50;

    sfVector2f enemy_1_2 = info_pst->enemy_1_2;
    sfVector2f enemy_2_2 = info_pst->enemy_2_2;
    if ((dino.x >= enemy_1_2.x - x_left) && (dino.x <= enemy_1_2.x + x_right))
        if ((dino.y >= enemy_1_2.y - y_l) && (dino.y <= enemy_1_2.y + y_r))
            info->game_mode = 2;
    if ((dino.x >= enemy_2_2.x - x_left) && (dino.x <= enemy_2_2.x + x_right))
        if ((dino.y >= enemy_2_2.y - y_l) && (dino.y <= enemy_2_2.y + y_r))
            info->game_mode = 2;
}

void collision_crow(sfVector2f dino, map_pst *info_pst, map_run *info)
{
    int y_l = 80;
    int x_left = 50;
    int y_r = 70;
    int x_right = 50;

    sfVector2f enemy_1 = info_pst->enemy_1;
    sfVector2f enemy_2 = info_pst->enemy_2;
    if (info_pst->dino_lower == 1)
        dino.y += 25;
    if ((dino.x >= enemy_1.x - x_left) && (dino.x <= enemy_1.x + x_right))
        if ((dino.y >= enemy_1.y - y_l) && (dino.y <= enemy_1.y + y_r))
            info->game_mode = 2;
    if ((dino.x >= enemy_2.x - x_left) && (dino.x <= enemy_2.x + x_right))
        if ((dino.y >= enemy_2.y - y_l) && (dino.y <= enemy_2.y + y_r))
            info->game_mode = 2;
    collision_crow_n(dino, info_pst, info);
}

void collision_cactus_n(sfVector2f dino, map_pst *info_pst, map_run *info)
{
    sfVector2f enemy_4_2 = info_pst->pst_oth.enemy_4_2;
    sfVector2f end_game = info_pst->pst_oth.end_game;
    if ((dino.x >= enemy_4_2.x - 60) && (dino.x <= enemy_4_2.x + 100))
        if ((dino.y >= enemy_4_2.y - 60) && (dino.y <= enemy_4_2.y + 100))
            info->game_mode = 2;
    if ((dino.x >= end_game.x - 10) && (dino.x <= end_game.x + 100))
        if ((dino.y >= end_game.y - 1000) && (dino.y <= end_game.y + 100))
            info->game_mode = 3;
}