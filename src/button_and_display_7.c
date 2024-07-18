/*
** EPITECH PROJECT, 2021
** button_and_display_7.c
** File description:
** button_and_display_7.c
*/

#include "my.h"

void des(sfTexture *texture, sfSprite *sprite , map_run *info)
{
    display_sprite(info->window, sprite);
    sfTexture_destroy(texture);
    sfSprite_destroy(sprite);
}

void button_level_1(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/buttons_sprite.png";
    char *chemin_2 = "./ressources/press_button.png";
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();
    if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 450 && mouse_y < 554)
        texture = sfTexture_createFromFile(chemin_2, NULL);
    else
        texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {810, 450};
    sfSprite_setPosition(sprite , x_y);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(sprite, factor);
    sfIntRect but = {0, 410, 610, 210};
    sfSprite_setTextureRect(sprite, but);
    des(texture, sprite, info);
}

void button_level_2(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/buttons_sprite.png";
    char *chemin_2 = "./ressources/press_button.png";
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();
    if (mouse_x > 815 && mouse_x < 1115 && mouse_y > 579 && mouse_y < 679)
        texture = sfTexture_createFromFile(chemin_2, NULL);
    else
        texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {810, 575};
    sfSprite_setPosition(sprite , x_y);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(sprite, factor);
    sfIntRect but = {600, 410, 610, 210};
    sfSprite_setTextureRect(sprite, but);
    des(texture, sprite, info);
}

void button_level_3(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/buttons_sprite.png";
    char *chemin_2 = "./ressources/press_button.png";
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();
    if (mouse_x > 813 && mouse_x < 1113 && mouse_y > 705 && mouse_y < 805)
        texture = sfTexture_createFromFile(chemin_2, NULL);
    else
        texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {810, 700};
    sfSprite_setPosition(sprite , x_y);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(sprite, factor);
    sfIntRect but = {1210, 410, 610, 210};
    sfSprite_setTextureRect(sprite, but);
    des(texture, sprite, info);
}

void button_level_4(map_run *info, map_pst *info_pst, sfIntRect but)
{
    char *chemin = "./ressources/buttons_sprite.png";
    char *chemin_2 = "./ressources/press_button.png";
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();
    if (mouse_x > 1840 && mouse_x < 1905 && mouse_y > 10 && mouse_y < 70)
        texture = sfTexture_createFromFile(chemin_2, NULL);
    else
        texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {1840, 10};
    sfSprite_setPosition(sprite , x_y);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfVector2f factor = {0.3, 0.3};
    sfSprite_setScale(sprite, factor);
    sfSprite_setTextureRect(sprite, but);
    des(texture, sprite, info);
}