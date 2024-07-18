/*
** EPITECH PROJECT, 2021
** map_and_score.c
** File description:
** map_and_score.c
*/

#include "my.h"

void button_game_over_press_btn_1(map_run *info, int p_1)
{
    char *chemin_1 = "./ressources/press_button.png";
    char *chemin_2 = "./ressources/buttons_sprite.png";

    sfSprite *sprite_button_1 = sfSprite_create();
    sfTexture *texture2;
    if (p_1 == 1)
        texture2 = sfTexture_createFromFile(chemin_1, NULL);
    else
        texture2 = sfTexture_createFromFile(chemin_2, NULL);
    sfSprite_setTexture(sprite_button_1, texture2, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(sprite_button_1, factor);
    sfIntRect coordinate1 = {0, 625, 610, 200};
    sfVector2f x_y_1 = {810, 500};
    sfSprite_setPosition(sprite_button_1, x_y_1);
    sfSprite_setTextureRect(sprite_button_1, coordinate1);
    display_sprite(info->window, sprite_button_1);
    sfSprite_destroy(sprite_button_1);
    sfTexture_destroy(texture2);
}

void button_game_over_press_btn_2(map_run *info, int p_2)
{
    char *chemin_1 = "./ressources/press_button.png";
    char *chemin_2 = "./ressources/buttons_sprite.png";

    sfSprite *sprite_button_2 = sfSprite_create();
    sfTexture *texture3;
    if (p_2 == 1)
        texture3 = sfTexture_createFromFile(chemin_1, NULL);
    else
        texture3 = sfTexture_createFromFile(chemin_2, NULL);
    sfSprite_setTexture(sprite_button_2, texture3, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(sprite_button_2, factor);
    sfVector2f x_y_2 = {810, 630};
    sfSprite_setPosition(sprite_button_2, x_y_2);
    sfIntRect coordinate2 = {600, 625, 615, 200};
    sfSprite_setTextureRect(sprite_button_2, coordinate2);
    display_sprite(info->window, sprite_button_2);
    sfSprite_destroy(sprite_button_2);
    sfTexture_destroy(texture3);
}

void mouse_button_game_over(map_run *info, int *p_1, int *p_2)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 500 && mouse_y < 600)
        *p_1 = 1;
    else
        *p_1 = 0;
    if (mouse_x > 815 && mouse_x < 1117 && mouse_y > 630 && mouse_y < 730)
        *p_2 = 1;
    else
        *p_2 = 0;
}

int game_over(map_run *info, map_pst *info_pst)
{
    int p_1 = 0;
    int p_2 = 0;

    if (info->game_mode != 2 || info->menu == 1)
        return 0;
    info_pst->dino_pst_act = 0;
    button_press_bgd(info);
    text_game_over(info);
    text_game_over_2(info, info_pst);
    mouse_button_game_over(info, &p_1, &p_2);
    button_game_over_press_btn_1(info, p_1);
    button_game_over_press_btn_2(info, p_2);
    return 0;
}

int pause_button_next(map_run *info, int p_1)
{
    char *chemin_1 = "./ressources/press_button.png";
    char *chemin_2 = "./ressources/buttons_sprite.png";

    sfSprite *sprite_button_2 = sfSprite_create();
    sfTexture *texture3;
    if (p_1 == 1)
        texture3 = sfTexture_createFromFile(chemin_1, NULL);
    else
        texture3 = sfTexture_createFromFile(chemin_2, NULL);
    sfSprite_setTexture(sprite_button_2, texture3, sfTrue);
    sfVector2f factor = {0.35, 0.35};
    sfSprite_setScale(sprite_button_2, factor);
    sfVector2f x_y_2 = {1823, 17};
    sfSprite_setPosition(sprite_button_2, x_y_2);
    sfIntRect coordinate2 = {2030, 0, 210, 200};
    sfSprite_setTextureRect(sprite_button_2, coordinate2);
    display_sprite(info->window, sprite_button_2);
    sfSprite_destroy(sprite_button_2);
    sfTexture_destroy(texture3);
}