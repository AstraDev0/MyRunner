/*
** EPITECH PROJECT, 2021
** button_and_display_14.c
** File description:
** button_and_display_14.c
*/

#include "my.h"

void button_press(map_run *i, sfEvent event, map_pst *info_pst, clock_var *ck)
{
    int mouse_x = sfMouse_getPositionRenderWindow(i->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(i->window).y;
    int condi = (i->menu == 0 && i->game_mode == 0);

    if (event.type == sfEvtKeyPressed && condi) {
        if (event.key.code == sfKeySpace && info_pst->dino_jump == 0)
            sfSound_play(info_pst->jump_dino);
        if (event.key.code == sfKeyUp && info_pst->dino_jump == 0)
            sfSound_play(info_pst->jump_dino);
    }
    button_menu_pressed_2(i, event, info_pst);
    button_menu_pressed(i, event, info_pst);
    press_mode_game(info_pst, i, event);
    button_pause(i, event, info_pst);
    press_limit(ck, i, event);
}

void next_main_3(map_pst *info_pst, map_run *info, clock_var *ck)
{
    sfVector2u size = sfRenderWindow_getSize(info->window);
    sfVector2u size_2 = {800, 600};
    if (size.x < 800 || size.y < 600)
        sfRenderWindow_setSize(info->window, size_2);
    sfRenderWindow_setFramerateLimit(info->window, ck->c_oth.limit);
}

void dino_shift(map_pst *info_pst, sfEvent event)
{
    if (info_pst->pst_dino.x < 10 && info_pst->dino_pst_act == 2)
        info_pst->dino_pst_act = 0;
    if (info_pst->pst_dino.x > 1799 && info_pst->dino_pst_act == 1)
        info_pst->dino_pst_act = 0;
    if (info_pst->dino_pst_act == 1)
        info_pst->pst_dino.x = info_pst->pst_dino.x + 20;
    if (info_pst->dino_pst_act == 2)
        info_pst->pst_dino.x = info_pst->pst_dino.x - 20;
}

void active_shift(map_pst *info_pst, sfEvent event)
{
    if (event.key.code == sfKeyRight && info_pst->pst_dino.x < 1800)
        info_pst->dino_pst_act = 1;
    if (info_pst->pst_dino.x > 10 && event.key.code == sfKeyLeft)
        info_pst->dino_pst_act = 2;
    if (info_pst->dino_jump == 0)
        if (event.key.code == sfKeyDown && event.type == sfEvtKeyPressed)
            info_pst->dino_lower = 1;
}

void valid_stop_dino(sfEvent event, map_pst *info_pst)
{
    int val = (event.key.code == sfKeyLeft || event.key.code == sfKeyRight);

    if (event.type != sfEvtKeyPressed && val)
        info_pst->dino_pst_act = 0;
}