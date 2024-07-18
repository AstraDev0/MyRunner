/*
** EPITECH PROJECT, 2021
** sprite_4.c
** File description:
** sprite_4.c
*/

#include "my.h"

sfTexture *sprite_end_game(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    info->map_oth.end_game = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->map_oth.end_game, info_pst->pst_oth.end_game);
    sfSprite_setTexture(info->map_oth.end_game, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->map_oth.end_game, factor);
    sfSprite_setTextureRect(info->map_oth.end_game, rect->end_game);
    return texture;
}

int anmt_enemy_1(map_run *info, pst_rect *rect, clock_var *clock)
{
    sfTime t = sfClock_getElapsedTime(clock->enemy_1);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (time > (sfInt32)(100)) {
        if (rect->enemy_1.left <= 320)
            rect->enemy_1.left += 92;
        else
            rect->enemy_1.left = 260;
        sfSprite_setTextureRect(info->map_oth.enemy_1, rect->enemy_1);
        sfClock_restart(clock->enemy_1);
    }
    return 0;
}

int anmt_enemy_2(map_run *info, pst_rect *rect, clock_var *clock)
{
    sfTime t = sfClock_getElapsedTime(clock->enemy_2);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (time > (sfInt32)(100)) {
        if (rect->enemy_2.left <= 320)
            rect->enemy_2.left += 92;
        else
            rect->enemy_2.left = 260;
        sfSprite_setTextureRect(info->map_oth.enemy_2, rect->enemy_2);
        sfClock_restart(clock->enemy_2);
    }
    return 0;
}

int anmt_enemy_1_2(map_run *info, pst_rect *rect, clock_var *clock)
{
    sfTime t = sfClock_getElapsedTime(clock->enemy_1_2);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (time > (sfInt32)(100)) {
        if (rect->enemy_1_2.left <= 320)
            rect->enemy_1_2.left += 92;
        else
            rect->enemy_1_2.left = 260;
        sfSprite_setTextureRect(info->map_oth.enemy_1_2, rect->enemy_1_2);
        sfClock_restart(clock->enemy_1_2);
    }
    return 0;
}

int anmt_enemy_2_2(map_run *info, pst_rect *rect, clock_var *clock)
{
    sfTime t = sfClock_getElapsedTime(clock->enemy_2_2);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (time > (sfInt32)(100)) {
        if (rect->enemy_2_2.left <= 320)
            rect->enemy_2_2.left += 92;
        else
            rect->enemy_2_2.left = 260;
        sfSprite_setTextureRect(info->map_oth.enemy_2_2, rect->enemy_2_2);
        sfClock_restart(clock->enemy_2_2);
    }
    return 0;
}