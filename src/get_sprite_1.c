/*
** EPITECH PROJECT, 2021
** sprite_1.c
** File description:
** sprite_1.c
*/

#include "my.h"

void display_sprite(sfRenderWindow *window, sfSprite *sprite)
{
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

int rdm_number(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

sfTexture *sprite_bgd_1(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/background_1.png";

    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->background_1, info_pst->pst_bgd_1);
    sfSprite_setTexture(info->background_1, texture, sfTrue);
    return texture;
}

sfTexture *sprite_bgd_5(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/background_5.png";

    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->background_5, info_pst->pst_bgd_5);
    sfSprite_setTexture(info->background_5, texture, sfTrue);
    return texture;
}

sfTexture *sprite_bgd_5_copy(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/background_5.png";

    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->background_5_copy, info_pst->pst_bgd_5_copy);
    sfSprite_setTexture(info->background_5_copy, texture, sfTrue);
    return texture;
}