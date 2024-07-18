/*
** EPITECH PROJECT, 2021
** map_and_score_1.c
** File description:
** map_and_score_1.c
*/

#include "my.h"

int pause_button(map_run *info)
{
    int p_1 = 0;
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (info->menu == 0 && info->game_mode == 0) {
        if (mouse_x > 1825 && mouse_x < 1898 && mouse_y > 13 && mouse_y < 92)
            p_1 = 1;
        else
            p_1 = 0;
    }
    pause_button_next(info, p_1);
}

void button_mode_press(map_run *info, map_pst *info_pst)
{
    pause_button(info);
    button_pause_press(info, info_pst);
    display_win(info, info_pst);
    game_over(info, info_pst);
}

int button_menu_2(map_pst *info_pst, map_run *info, sfEvent event)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (event.type != sfEvtMouseButtonReleased || info->menu != 1)
        return 0;
    if (info->menu == 1 && info_pst->pst_oth.menu_2 == 0)
        if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 625 && mouse_y < 725)
            info_pst->pst_oth.menu_2 = 2;
    return 0;
}

void next_main_2(sfEvent ev, map_pst *info_pst, map_run *info, clock_var *ck)
{
    init_sprite(info);
    next_main_3(info_pst, info, ck);
    while (sfRenderWindow_pollEvent(info->window, &ev)) {
        if (ev.type == sfEvtClosed)
            sfRenderWindow_close(info->window);
        button_menu_2(info_pst, info, ev);
        button_press(info, ev, info_pst, ck);
        if (info->game_mode != 0)
            continue;
        if (ev.type == sfEvtKeyPressed && info->menu == 0)
            active_shift(info_pst, ev);
        if (ev.type == sfEvtKeyReleased && ev.key.code == sfKeyDown)
            info_pst->dino_lower = 0;
        valid_stop_dino(ev, info_pst);
        if (ev.type == sfEvtKeyPressed && info->menu == 0)
            dino_jump_check(ev, info_pst);
    }
    dino_shift(info_pst, ev);
    check_collision(info_pst, info);
}

int destroy_win_and_music(map_run *info, map_pst *info_pst)
{
    sfMusic_destroy(info->music_menu);
    sfRenderWindow_destroy(info->window);
    sfSound_destroy(info_pst->jump_dino);
    sfSoundBuffer_destroy(info_pst->jump_buff);
    return 0;
}