/*
** EPITECH PROJECT, 2021
** button_and_display_17.c
** File description:
** button_and_display_17.c
*/

#include "my.h"

void button_pause_press_font(map_run *info)
{
    sfFont *font;
    font = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_pause = sfText_create();
    sfVector2f x_y = {630, 140};
    sfText_setPosition(title_pause, x_y);
    sfText_setCharacterSize(title_pause, 150);
    sfText_setColor(title_pause, sfWhite);
    sfText_setFont(title_pause, font);
    sfText_setString(title_pause, "Pause");
    sfRenderWindow_drawText(info->window, title_pause, NULL);
    sfText_destroy(title_pause);
    sfFont_destroy(font);
}

void mouse_button_pause(map_run *info, int *p_1, int *p_2)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (mouse_x > 810 && mouse_x < 1117 && mouse_y > 450 && mouse_y < 550)
        *p_1 = 1;
    else
        *p_1 = 0;
    if (mouse_x > 810 && mouse_x < 1117 && mouse_y > 581 && mouse_y < 681)
        *p_2 = 1;
    else
        *p_2 = 0;
}

int button_pause_press(map_run *info, map_pst *info_pst)
{
    int p_1 = 0;
    int p_2 = 0;

    if (info->game_mode != 1 || info->menu == 1)
        return 0;
    info_pst->dino_pst_act = 0;
    mouse_button_pause(info, &p_1, &p_2);
    button_press_bgd(info);
    button_pause_press_btn_1(info, p_1);
    button_pause_press_btn_2(info, p_2);
    button_pause_press_font(info);
    return 0;
}

void button_win_press_btn_1(map_run *info, int p_1)
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
    sfIntRect coordinate1 = {600, 625, 615, 200};
    sfVector2f x_y_1 = {810, 490};
    sfSprite_setPosition(sprite_button_1, x_y_1);
    sfSprite_setTextureRect(sprite_button_1, coordinate1);
    display_sprite(info->window, sprite_button_1);
    sfSprite_destroy(sprite_button_1);
    sfTexture_destroy(texture2);
}

void mouse_button_win(map_run *info, int *p_1)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (mouse_x > 810 && mouse_x < 1117 && mouse_y > 490 && mouse_y < 590)
        *p_1 = 1;
    else
        *p_1 = 0;
}