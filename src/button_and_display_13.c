/*
** EPITECH PROJECT, 2021
** button_and_display_13.c
** File description:
** button_and_display_13.c
*/

#include "my.h"

int press_mode_game(map_pst *info_pst, map_run *info, sfEvent event)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (info->game_mode == 0 || info->menu == 1)
        return 0;
    if (event.type != sfEvtMouseButtonReleased)
        return 0;
    if (info->game_mode == 1) {
        if (mouse_x > 810 && mouse_x < 1117 && mouse_y > 450 && mouse_y < 550)
            info->game_mode = 0;
        if (mouse_x > 810 && mouse_x < 1117 && mouse_y > 581 && mouse_y < 681)
            quit_game(info_pst, info);
    }
    if (info->game_mode == 3)
        if (mouse_x > 810 && mouse_x < 1117 && mouse_y > 490 && mouse_y < 590)
            quit_game(info_pst, info);
    press_mode_game_n(info, info_pst);
    return 0;
}

int button_menu_pressed(map_run *info, sfEvent event, map_pst *info_pst)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (event.type != sfEvtMouseButtonReleased)
        return 0;
    if (info->menu == 1)
        next_button_press(info, mouse_x, mouse_y);
    if (info_pst->pst_oth.menu_2 != 0 || info->menu != 1)
        return 0;
    if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 750 && mouse_y < 850)
        sfRenderWindow_close(info->window);
    if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 500 && mouse_y < 600) {
        change_map(info, info_pst, info_pst->pst_oth.av[1]);
        info->menu = 0;
    }
    return 0;
}

void change_map(map_run *info, map_pst *info_pst, char *file)
{
    char *buff = read_file(file);

    if (buff != "null") {
        info->map = my_str_to_word_array(buff);
        info_pst->pst_oth.menu_2 = 0;
        info->menu = 0;
    }
}

void button_menu_pressed_2_n(map_run *info, sfEvent event, map_pst *info_pst)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (mouse_x > 810 && mouse_x < 1110 && mouse_y > 450 && mouse_y < 554)
        change_map(info, info_pst, "maps/map1.txt");
    if (mouse_x > 815 && mouse_x < 1115 && mouse_y > 579 && mouse_y < 679)
        change_map(info, info_pst, "maps/map2.txt");
    if (mouse_x > 813 && mouse_x < 1113 && mouse_y > 705 && mouse_y < 805)
        change_map(info, info_pst, "maps/map3.txt");
}

int button_menu_pressed_2(map_run *info, sfEvent event, map_pst *info_pst)
{
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    if (event.type != sfEvtMouseButtonReleased)
        return 0;
    if (info_pst->pst_oth.menu_2 == 2) {
        info_pst->pst_oth.menu_2 = 1;
        return 0;
    }
    if (info_pst->pst_oth.menu_2 != 1 || info->menu != 1)
        return 0;
    if (mouse_x > 815 && mouse_x < 1115 && mouse_y > 830 && mouse_y < 930)
        info_pst->pst_oth.menu_2 = 0;
    button_menu_pressed_2_n(info, event, info_pst);
    return 0;
}