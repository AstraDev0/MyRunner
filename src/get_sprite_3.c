/*
** EPITECH PROJECT, 2021
** sprite_3.c
** File description:
** sprite_3.c
*/

#include "my.h"

sfTexture *sprite_enemy_2_2(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    info->map_oth.enemy_2_2 = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->map_oth.enemy_2_2, info_pst->enemy_2_2);
    sfSprite_setTexture(info->map_oth.enemy_2_2, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->map_oth.enemy_2_2, factor);
    sfSprite_setTextureRect(info->map_oth.enemy_2_2, rect->enemy_2_2);
    return texture;
}

sfTexture *sprite_enemy_3(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    info->map_oth.enemy_3 = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->map_oth.enemy_3, info_pst->pst_oth.enemy_3);
    sfSprite_setTexture(info->map_oth.enemy_3, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->map_oth.enemy_3, factor);
    sfSprite_setTextureRect(info->map_oth.enemy_3, rect->enemy_c);
    return texture;
}

sfTexture *sprite_enemy_4(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    info->map_oth.enemy_4 = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->map_oth.enemy_4, info_pst->pst_oth.enemy_4);
    sfSprite_setTexture(info->map_oth.enemy_4, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->map_oth.enemy_4, factor);
    sfSprite_setTextureRect(info->map_oth.enemy_4, rect->enemy_c_2);
    return texture;
}

sfTexture *sprite_enemy_3_2(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    info->map_oth.enemy_3_2 = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->map_oth.enemy_3_2, info_pst->pst_oth.enemy_3_2);
    sfSprite_setTexture(info->map_oth.enemy_3_2, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->map_oth.enemy_3_2, factor);
    sfSprite_setTextureRect(info->map_oth.enemy_3_2, rect->enemy_c_3);
    return texture;
}

sfTexture *sprite_enemy_4_2(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    info->map_oth.enemy_4_2 = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->map_oth.enemy_4_2, info_pst->pst_oth.enemy_4_2);
    sfSprite_setTexture(info->map_oth.enemy_4_2, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->map_oth.enemy_4_2, factor);
    sfSprite_setTextureRect(info->map_oth.enemy_4_2, rect->enemy_c_4);
    return texture;
}