/*
** EPITECH PROJECT, 2021
** button_and_display_1.c
** File description:
** button_and_display_1.c
*/

#include "my.h"

sfTexture *bgd_menu(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/menu_bgd.png";

    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {0, 0};
    sfSprite_setPosition(info->background_menu , x_y);
    sfSprite_setTexture(info->background_menu, texture, sfTrue);
    return texture;
}

sfTexture *button_1_menu(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/buttons_sprite.png";
    char *chemin_2 = "./ressources/press_button.png";
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    sfTexture *texture;
    if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 500 && mouse_y < 600)
        texture = sfTexture_createFromFile(chemin_2, NULL);
    else
        texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {810, 500};
    sfSprite_setPosition(info->button_1 , x_y);
    sfSprite_setTexture(info->button_1, texture, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(info->button_1, factor);
    sfSprite_setTextureRect(info->button_1, rect->button_1);
    return texture;
}

sfTexture *button_2_menu(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/buttons_sprite.png";
    char *chemin_2 = "./ressources/press_button.png";
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    sfTexture *texture;
    if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 625 && mouse_y < 725)
        texture = sfTexture_createFromFile(chemin_2, NULL);
    else
        texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {810, 625};
    sfSprite_setPosition(info->button_2, x_y);
    sfSprite_setTexture(info->button_2, texture, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(info->button_2, factor);
    sfSprite_setTextureRect(info->button_2, rect->button_2);
    return texture;
}

sfTexture *button_3_menu(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/buttons_sprite.png";
    char *chemin_2 = "./ressources/press_button.png";
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    sfTexture *texture;
    if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 750 && mouse_y < 850)
        texture = sfTexture_createFromFile(chemin_2, NULL);
    else
        texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {810, 750};
    sfSprite_setPosition(info->button_3, x_y);
    sfSprite_setTexture(info->button_3, texture, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(info->button_3, factor);
    sfSprite_setTextureRect(info->button_3, rect->button_3);
    return texture;
}

sfTexture *button_4_menu(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/buttons_sprite.png";
    char *chemin_2 = "./ressources/press_button.png";
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    sfTexture *texture;
    if (mouse_x > 1840 && mouse_x < 1905 && mouse_y > 10 && mouse_y < 70)
        texture = sfTexture_createFromFile(chemin_2, NULL);
    else
        texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {1840, 10};
    sfSprite_setPosition(info->button_4, x_y);
    sfSprite_setTexture(info->button_4, texture, sfTrue);
    sfVector2f factor = {0.3, 0.3};
    sfSprite_setScale(info->button_4, factor);
    sfSprite_setTextureRect(info->button_4, rect->button_4);
    return texture;
}