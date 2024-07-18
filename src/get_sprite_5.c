/*
** EPITECH PROJECT, 2021
** sprite_5.c
** File description:
** sprite_5.c
*/

#include "my.h"

sfTexture *sprite_dino(map_run *info, map_pst *info_pst, pst_rect *rect)
{
    char *chemin = "./ressources/dino_and_enemies.png";

    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setPosition(info->dino, info_pst->pst_dino);
    sfSprite_setTexture(info->dino, texture, sfTrue);
    sfVector2f factor = {1.3, 1.3};
    sfSprite_setScale(info->dino, factor);
    sfIntRect jump = {1680, 0, 90, 90};
    if (info_pst->dino_jump != 0)
        sfSprite_setTextureRect(info->dino, jump);
    else if (info_pst->dino_lower == 1)
        sfSprite_setTextureRect(info->dino, rect->allow_dino);
    else
        sfSprite_setTextureRect(info->dino, rect->dino);
    return texture;
}

int anmt_dino_2(map_run *info, map_pst *pst, pst_rect *rct, clock_var *ck)
{
    sfTime t = sfClock_getElapsedTime(ck->dino);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (time > (sfInt32)(100)) {
        if (rct->dino.left <= 1900)
            rct->dino.left += 88;
        else
            rct->dino.left = 1855;
        sfSprite_setTextureRect(info->dino, rct->dino);
        sfClock_restart(ck->dino);
    }
    return 0;
}

int anmt_dino(map_run *info, map_pst *pst, pst_rect *rect, clock_var *ck)
{
    sfTime t = sfClock_getElapsedTime(ck->dino);
    sfInt32 time = sfTime_asMilliseconds(t);

    if (time > (sfInt32)(100) && pst->dino_lower == 1) {
        if (rect->allow_dino.left <= 2275)
            rect->allow_dino.left += 118;
        else
            rect->allow_dino.left = 2206;
        sfSprite_setTextureRect(info->dino, rect->allow_dino);
        sfClock_restart(ck->dino);
    }
    if (pst->dino_jump != 0 || pst->dino_lower == 1)
        return 0;
    return anmt_dino_2(info, pst, rect, ck);
}

int display_score(map_run *info, map_pst *info_pst, clock_var *clock)
{
    char buffer[1000];

    if (info->menu == 1)
        return 0;
    sfFont *font;
    font = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_pause = sfText_create();
    sfVector2f x_y = {20, 25};
    sfText_setPosition(title_pause, x_y);
    sfText_setCharacterSize(title_pause, 20);
    sfText_setColor(title_pause, sfWhite);
    sfText_setFont(title_pause, font);
    my_strcpy(buffer, "Score : ");
    my_strcat(buffer, my_itoa(info_pst->score));
    sfText_setString(title_pause, buffer);
    sfRenderWindow_drawText(info->window, title_pause, NULL);
    sfText_destroy(title_pause);
    sfFont_destroy(font);
    return 0;
}

void displ_sprite_map_n_2(map_run *info, map_pst *info_pst, clock_var *clock)
{
    if (info_pst->score_restart == 1) {
        info_pst->score = 0;
        sfClock_restart(clock->c_oth.score);
    }
    display_score(info, info_pst, clock);
    button_mode_press(info, info_pst);
}
