/*
** EPITECH PROJECT, 2022
** button_and_display_20.c
** File description:
** button_and_display_20.c
*/

#include "my.h"

void display_limit(char *text, map_run *info)
{
    sfFont *font;
    font = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_menu = sfText_create();
    sfVector2f x_y = {20, 960};
    sfText_setPosition(title_menu, x_y);
    sfText_setCharacterSize(title_menu, 20);
    sfText_setColor(title_menu, sfWhite);
    sfText_setFont(title_menu, font);
    sfText_setString(title_menu, text);
    sfRenderWindow_drawText(info->window, title_menu, NULL);
    sfText_destroy(title_menu);
    sfFont_destroy(font);
}

void limit_text(map_run *info, clock_var *clock)
{
    char buffer[1000];

    my_strcpy(buffer, "Frame limit : ");
    display_limit(my_strcat(buffer, my_itoa(clock->c_oth.limit)), info);
}

int press_limit(clock_var *ck, map_run *i, sfEvent event)
{
    int mouse_x = sfMouse_getPositionRenderWindow(i->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(i->window).y;

    if (i->menu != 1 || event.type != sfEvtMouseButtonReleased)
        return 0;
    if (mouse_x >= 20 && mouse_x <= 280 && mouse_y >= 960 && mouse_y <= 1000) {
        if (ck->c_oth.limit >= 120)
            ck->c_oth.limit = 30;
        else
            ck->c_oth.limit += 10;
    }
    return 0;
}