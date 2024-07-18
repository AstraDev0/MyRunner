/*
** EPITECH PROJECT, 2021
** sprite_2.c
** File description:
** sprite_2.c
*/

#include "my.h"

sfTexture *sprite_floor(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/floor.png";

    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->floor, info_pst->pst_floor);
    sfSprite_setTexture(info->floor, texture, sfTrue);
    return texture;
}

sfTexture *sprite_floor_copy(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/floor.png";

    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->floor_copy, info_pst->pst_floor_copy);
    sfSprite_setTexture(info->floor_copy, texture, sfTrue);
    return texture;
}

sfTexture *sprite_enemy_1(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    info->map_oth.enemy_1 = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->map_oth.enemy_1, info_pst->enemy_1);
    sfSprite_setTexture(info->map_oth.enemy_1, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->map_oth.enemy_1, factor);
    sfSprite_setTextureRect(info->map_oth.enemy_1, rect->enemy_1);
    return texture;
}

sfTexture *sprite_enemy_2(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    info->map_oth.enemy_2 = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->map_oth.enemy_2, info_pst->enemy_2);
    sfSprite_setTexture(info->map_oth.enemy_2, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->map_oth.enemy_2, factor);
    sfSprite_setTextureRect(info->map_oth.enemy_2, rect->enemy_2);
    return texture;
}

sfTexture *sprite_enemy_1_2(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    info->map_oth.enemy_1_2 = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->map_oth.enemy_1_2, info_pst->enemy_1_2);
    sfSprite_setTexture(info->map_oth.enemy_1_2, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->map_oth.enemy_1_2, factor);
    sfSprite_setTextureRect(info->map_oth.enemy_1_2, rect->enemy_1_2);
    return texture;
}