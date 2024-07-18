/*
** EPITECH PROJECT, 2021
** button_and_display_6.c
** File description:
** button_and_display_6.c
*/

#include "my.h"

void redirec_dis_en_next(map_run *info, map_pst *info_pst, clock_var *clock)
{
    display_enemy_1(info, info_pst, clock);
    display_enemy_2(info, info_pst, clock);
    display_enemy_1_2(info, info_pst, clock);
    display_end_game(info, info_pst, clock);
    display_enemy_2_2(info, info_pst, clock);
    display_enemy_3(info, info_pst, clock);
    display_enemy_3_2(info, info_pst, clock);
    display_enemy_4(info, info_pst, clock);
    display_enemy_4_2(info, info_pst, clock);
}

void restart_var(map_run *info, clock_var *clock)
{
    if (info->map[0][info->map_block] == '1')
        value_act_2(info);
    if (info->map[1][info->map_block] == '2')
        value_act_3(info);
    info->map_block += 1;
    sfClock_restart(clock->c_oth.map_block);
}

int redirec_dis_en(map_run *info, map_pst *info_pst, clock_var *clock)
{
    sfTime t = sfClock_getElapsedTime(clock->c_oth.map_block);
    sfInt32 time = sfTime_asMilliseconds(t);

    redirec_dis_en_next(info, info_pst, clock);
    if (time > (sfInt32)(1000) && info->menu == 0) {
        if (info->map[2][info->map_block] != 'x')
            return 0;
        if (info->map[1][info->map_block] == '3')
            info->map_oth.end_game_act += 1;
        if (info->map_oth.end_game_act != 0)
            return 0;
        if (info->map[1][info->map_block] == '1')
            value_act(info);
        restart_var(info, clock);
    }
    return 0;
}

void dspy_g_next(map_run *info, map_pst *if_pst, pst_rect *rect, texture *tex)
{
    if (info->map_oth.enemy_1_act > 0)
        tex->enemy_1 = sprite_enemy_1(info, if_pst, rect);
    if (info->map_oth.enemy_2_act > 0)
        tex->enemy_2 = sprite_enemy_2(info, if_pst, rect);
    if (info->map_oth.enemy_1_2_act > 0)
        tex->enemy_1_2 = sprite_enemy_1_2(info, if_pst, rect);
    if (info->map_oth.enemy_2_2_act > 0)
        tex->enemy_2_2 = sprite_enemy_2_2(info, if_pst, rect);
    if (info->map_oth.enemy_3_act > 0)
        tex->text_oth.enemy_3 = sprite_enemy_3(info, if_pst, rect);
    if (info->map_oth.enemy_4_act > 0)
        tex->text_oth.enemy_4 = sprite_enemy_4(info, if_pst, rect);
    if (info->map_oth.enemy_3_2_act > 0)
        tex->text_oth.enemy_3_2 = sprite_enemy_3_2(info, if_pst, rect);
    if (info->map_oth.enemy_4_2_act > 0)
        tex->text_oth.enemy_4_2 = sprite_enemy_4_2(info, if_pst, rect);
    if (info->map_oth.end_game_act > 0)
        tex->text_oth.end_game = sprite_end_game(info, if_pst, rect);
}

void title_menu_2(map_run *info)
{
    sfFont *font;
    font = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_menu = sfText_create();
    sfVector2f x_y = {580, 140};
    sfText_setPosition(title_menu, x_y);
    sfText_setCharacterSize(title_menu, 150);
    sfText_setColor(title_menu, sfWhite);
    sfText_setFont(title_menu, font);
    sfText_setString(title_menu, "LEVELS");
    sfRenderWindow_drawText(info->window, title_menu, NULL);
    sfText_destroy(title_menu);
    sfFont_destroy(font);
}