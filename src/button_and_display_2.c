/*
** EPITECH PROJECT, 2021
** button_and_display_2.c
** File description:
** button_and_display_2.c
*/

#include "my.h"

void title_menu(map_run *info)
{
    sfFont *font;
    font = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_menu = sfText_create();
    sfVector2f x_y = {320, 140};
    sfText_setPosition(title_menu, x_y);
    sfText_setCharacterSize(title_menu, 150);
    sfText_setColor(title_menu, sfWhite);
    sfText_setFont(title_menu, font);
    sfText_setString(title_menu, "Dino runner");
    sfRenderWindow_drawText(info->window, title_menu, NULL);
    sfText_destroy(title_menu);
    sfFont_destroy(font);
}

void destroy_menu(texture *texture, map_run *info)
{
    sfTexture_destroy(texture->background_menu);
    sfTexture_destroy(texture->button_1);
    sfTexture_destroy(texture->button_2);
    sfTexture_destroy(texture->button_3);
    sfTexture_destroy(texture->button_4);
    sfSprite_destroy(info->background_menu);
    sfSprite_destroy(info->button_1);
    sfSprite_destroy(info->button_2);
    sfSprite_destroy(info->button_3);
    sfSprite_destroy(info->button_4);
}

void create_sprite_menu(map_run *info)
{
    info->background_menu = sfSprite_create();
    info->button_1 = sfSprite_create();
    info->button_2 = sfSprite_create();
    info->button_3 = sfSprite_create();
    info->button_4 = sfSprite_create();
}

void display_record(map_run *info, map_pst *info_pst)
{
    char buffer[1000];

    sfFont *font;
    font = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_menu = sfText_create();
    sfVector2f x_y = {20, 25};
    sfText_setPosition(title_menu, x_y);
    sfText_setCharacterSize(title_menu, 20);
    sfText_setColor(title_menu, sfWhite);
    sfText_setFont(title_menu, font);
    my_strcpy(buffer, "Record : ");
    my_strcat(buffer, my_itoa(info_pst->record));
    sfText_setString(title_menu, buffer);
    sfRenderWindow_drawText(info->window, title_menu, NULL);
    sfText_destroy(title_menu);
    sfFont_destroy(font);
}

void display_menu(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    texture texture;
    create_sprite_menu(info);
    texture.background_menu = bgd_menu(info, info_pst);
    texture.button_1 = button_1_menu(info, info_pst, rect);
    texture.button_2 = button_2_menu(info, info_pst, rect);
    texture.button_3 = button_3_menu(info, info_pst, rect);
    texture.button_4 = button_4_menu(info, info_pst, rect);
    display_sprite(info->window, info->background_menu);
    display_sprite(info->window, info->button_1);
    display_sprite(info->window, info->button_2);
    display_sprite(info->window, info->button_3);
    display_sprite(info->window, info->button_4);
    title_menu(info);
    destroy_menu(&texture, info);
    condition_play_music(rect, info);
    display_record(info, info_pst);
}