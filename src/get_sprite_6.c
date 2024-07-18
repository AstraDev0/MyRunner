/*
** EPITECH PROJECT, 2021
** sprite_6.c
** File description:
** sprite_6.c
*/

#include "my.h"

void displ_sprite_map_n(map_run *info, map_pst *info_pst, clock_var *clock)
{
    if (info->map_oth.enemy_1_act > 0)
        display_sprite(info->window, info->map_oth.enemy_1);
    if (info->map_oth.enemy_2_act > 0)
        display_sprite(info->window, info->map_oth.enemy_2);
    if (info->map_oth.enemy_1_2_act > 0)
        display_sprite(info->window, info->map_oth.enemy_1_2);
    if (info->map_oth.enemy_2_2_act > 0)
        display_sprite(info->window, info->map_oth.enemy_2_2);
    if (info->map_oth.enemy_3_act > 0)
        display_sprite(info->window, info->map_oth.enemy_3);
    if (info->map_oth.enemy_4_act > 0)
        display_sprite(info->window, info->map_oth.enemy_4);
    if (info->map_oth.enemy_3_2_act > 0)
        display_sprite(info->window, info->map_oth.enemy_3_2);
    if (info->map_oth.enemy_4_2_act > 0)
        display_sprite(info->window, info->map_oth.enemy_4_2);
    if (info->map_oth.end_game_act > 0)
        display_sprite(info->window, info->map_oth.end_game);
    displ_sprite_map_n_2(info, info_pst, clock);
}

void displ_sprite_map(map_run *info, map_pst *info_pst, clock_var *clock)
{
    display_sprite(info->window, info->background_1);
    display_sprite(info->window, info->background_5);
    display_sprite(info->window, info->background_5_copy);
    display_sprite(info->window, info->floor);
    display_sprite(info->window, info->floor_copy);
    display_sprite(info->window, info->dino);
    displ_sprite_map_n(info, info_pst, clock);
}

void destroy_texture_next(texture *texture, map_run *info)
{
    if (info->map_oth.enemy_1_act > 0)
        sfTexture_destroy(texture->enemy_1);
    if (info->map_oth.enemy_2_act > 0)
        sfTexture_destroy(texture->enemy_2);
    if (info->map_oth.enemy_1_2_act > 0)
        sfTexture_destroy(texture->enemy_1_2);
    if (info->map_oth.enemy_2_2_act > 0)
        sfTexture_destroy(texture->enemy_2_2);
    if (info->map_oth.enemy_3_act > 0)
        sfTexture_destroy(texture->text_oth.enemy_3);
    if (info->map_oth.enemy_4_act > 0)
        sfTexture_destroy(texture->text_oth.enemy_4);
    if (info->map_oth.enemy_3_2_act > 0)
        sfTexture_destroy(texture->text_oth.enemy_3_2);
    if (info->map_oth.enemy_4_2_act > 0)
        sfTexture_destroy(texture->text_oth.enemy_4_2);
    if (info->map_oth.end_game_act > 0)
        sfTexture_destroy(texture->text_oth.end_game);
}

void destroy_texture(texture *texture, map_run *info)
{
    sfTexture_destroy(texture->background_1);
    sfTexture_destroy(texture->background_5_copy);
    sfTexture_destroy(texture->background_5);
    sfTexture_destroy(texture->floor);
    sfTexture_destroy(texture->floor_copy);
    sfTexture_destroy(texture->dino);
    destroy_texture_next(texture, info);
}

void jump_dino(map_run *info, map_pst *info_pst, clock_var *clock)
{
    sfTime t = sfClock_getElapsedTime(clock->dino);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (time > (sfInt32)(1) && info_pst->dino_jump != 0) {
        if (info_pst->pst_dino.y >= 670 && info_pst->dino_jump == 1)
            info_pst->pst_dino.y -= 30;
        else
            info_pst->dino_jump = 2;
        if (info_pst->pst_dino.y <= 900 && info_pst->dino_jump == 2)
            info_pst->pst_dino.y += 30;
        if (info_pst->pst_dino.y == 830)
            info_pst->dino_jump = 0;
        sfSprite_setPosition(info->dino, info_pst->pst_dino);
        sfClock_restart(clock->dino);
    }
}