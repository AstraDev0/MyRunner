/*
** EPITECH PROJECT, 2021
** button_and_display_12.c
** File description:
** button_and_display_12.c
*/

#include "my.h"

void rect_sprite_2(pst_rect *rect, map_run *info)
{
    rect->button_2.height = 200;
    rect->button_2.width = 600;
    rect->button_3.left = 1210;
    rect->button_3.top = 620;
    rect->button_3.height = 210;
    rect->button_3.width = 610;
    rect->button_4.left = 1815;
    rect->button_4.top = 620;
    rect->button_4.height = 210;
    rect->button_4.width = 220;
    rect->allow_dino.left = 2206;
    rect->allow_dino.top = 0;
    rect->allow_dino.width = 110;
    rect->allow_dino.height = 90;
    rect->enemy_2 = rect->enemy_1;
    rect->enemy_1_2 = rect->enemy_1;
    rect->enemy_2_2 = rect->enemy_1;
    rect_sprite_3(rect);
}

int_least64_t rect_sprite(pst_rect *rect, map_run *info, char **argv)
{
    rect->dino.left = 1855;
    rect->dino.top = 0;
    rect->dino.height = 100;
    rect->dino.width = 90;
    rect->enemy_1.left = 260;
    rect->enemy_1.top = 0;
    rect->enemy_1.height = 100;
    rect->enemy_1.width = 90;
    rect->button_1.left = 0;
    rect->button_1.top = 0;
    rect->button_1.height = 200;
    rect->button_1.width = 600;
    rect->button_2.left = 1215;
    rect->button_2.top = 0;
    rect_sprite_2(rect, info);
    return 0;
}

void next_button_press(map_run *info, int mouse_x, int mouse_y)
{
    int pres = 0;

    if (mouse_x > 1840 && mouse_x < 1905 && mouse_y > 10 && mouse_y < 70)
        if (info->map_oth.play_menu == 0)
            info->map_oth.play_menu = 1;
    else if (mouse_x > 1840 && mouse_x < 1905 && mouse_y > 10 && mouse_y < 70)
        pres = 1;
    if (info->map_oth.play_menu == 1 && pres == 1)
        info->map_oth.play_menu = 0;
}

int button_pause(map_run *info, sfEvent event, map_pst *info_pst)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (info->menu == 1)
        return 0;
    if (info->game_mode == 0 && event.type == sfEvtMouseButtonReleased)
        if (mouse_x > 1825 && mouse_x < 1898 && mouse_y > 13 && mouse_y < 92)
            info->game_mode = 1;
    if (info->menu == 1 || event.type != sfEvtKeyPressed)
        return 0;
    if (event.key.code == sfKeyEscape && info->game_mode == 1)
        info->game_mode = 0;
    else if (event.key.code == sfKeyEscape && info->game_mode == 0)
        info->game_mode = 1;
    return 0;
}

int press_mode_game_n(map_run *info, map_pst *info_pst)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (info->game_mode != 2)
        return 0;
    if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 500 && mouse_y < 600) {
        quit_game(info_pst, info);
        info->menu = 0;
        info_pst->score_restart = 1;
    }
    if (mouse_x > 815 && mouse_x < 1117 && mouse_y > 630 && mouse_y < 730)
        quit_game(info_pst, info);
    return 0;
}