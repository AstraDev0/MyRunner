/*
** EPITECH PROJECT, 2021
** button_and_display_8.c
** File description:
** button_and_display_8.c
*/

#include "my.h"

void button_level_5(map_run *info, map_pst *info_pst)
{
    char *chemin = "./ressources/buttons_sprite.png";
    char *chemin_2 = "./ressources/press_button.png";
    int mouse_x = sfMouse_getPositionRenderWindow(info->window).x;
    int mouse_y = sfMouse_getPositionRenderWindow(info->window).y;

    sfTexture *texture;
    sfSprite *sprite = sfSprite_create();
    if (mouse_x > 815 && mouse_x < 1115 && mouse_y > 830 && mouse_y < 930)
        texture = sfTexture_createFromFile(chemin_2, NULL);
    else
        texture = sfTexture_createFromFile(chemin, NULL);
    sfVector2f x_y = {815, 825};
    sfSprite_setPosition(sprite , x_y);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(sprite, factor);
    sfIntRect but = {0, 825, 610, 210};
    sfSprite_setTextureRect(sprite, but);
    des(texture, sprite, info);
}

void display_menu_2(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    texture texture;
    info->background_menu = sfSprite_create();
    texture.background_menu = bgd_menu(info, info_pst);
    display_sprite(info->window, info->background_menu);
    button_level_1(info, info_pst);
    button_level_2(info, info_pst);
    button_level_3(info, info_pst);
    button_level_4(info, info_pst, rect->button_4);
    button_level_5(info, info_pst);
    display_record(info, info_pst);
    condition_play_music(rect, info);
    sfTexture_destroy(texture.background_menu);
    sfSprite_destroy(info->background_menu);
    title_menu_2(info);
}

int menu_2(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    if (info_pst->pst_oth.menu_2 == 1) {
        display_menu_2(info, info_pst, rect);
        return 0;
    }
    return 1;
}

int dispy_g(map_run *info, map_pst *info_pst, pst_rect *rect, clock_var *clock)
{
    texture texture;
    if (info->menu == 1) {
        if (menu_2(info, info_pst, rect))
            display_menu(info, info_pst, rect);
        limit_text(info, clock);
        return 0;
    }
    texture.background_1 = sprite_bgd_1(info, info_pst);
    texture.background_5 = sprite_bgd_5(info, info_pst);
    texture.background_5_copy = sprite_bgd_5_copy(info, info_pst);
    texture.floor = sprite_floor(info, info_pst);
    texture.floor_copy = sprite_floor_copy(info, info_pst);
    texture.dino = sprite_dino(info, info_pst, rect);
    if (info->game_mode == 0)
        redirec_dis_en(info, info_pst, clock);
    dspy_g_next(info, info_pst, rect, &texture);
    dpy_g_n(info, info_pst, rect, clock);
    destroy_texture(&texture, info);
    return 0;
}

int dest_sprite_di(map_run *info, sfRenderWindow *window, map_pst *info_pst)
{
    sfRenderWindow_display(window);
    sfSprite_destroy(info->background_1);
    sfSprite_destroy(info->background_5);
    sfSprite_destroy(info->background_5_copy);
    sfSprite_destroy(info->floor);
    sfSprite_destroy(info->floor_copy);
    sfSprite_destroy(info->dino);
    return 0;
}