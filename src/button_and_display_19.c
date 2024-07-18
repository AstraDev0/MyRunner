/*
** EPITECH PROJECT, 2021
** button_and_display_19.c
** File description:
** button_and_display_19.c
*/

#include "my.h"

void record_create(map_pst *info_pst)
{
    char *buffer;
    int contained;
    char *res;

    FILE *file = NULL;
    buffer = read_file("record.txt");
    if (buffer == "null")
        buffer = read_file("record.txt");
    contained = my_getnbr(buffer);
    if (contained < info_pst->score && info_pst->record < info_pst->score) {
        file = create_file(file);
        res = my_itoa(info_pst->score);
        info_pst->record = info_pst->score;
        fwrite(res, 1, my_strlen(res), file);
    } else if (buffer == "null") {
        rac(file);
    }
}

void win_text_2(map_run *info, map_pst *info_pst)
{
    char buffer[1000];

    sfFont *font2;
    font2 = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_pause2 = sfText_create();
    sfVector2f x_y2 = {820, 380};
    sfText_setPosition(title_pause2, x_y2);
    sfText_setCharacterSize(title_pause2, 40);
    sfText_setColor(title_pause2, sfWhite);
    sfText_setFont(title_pause2, font2);
    record_create(info_pst);
    my_strcpy(buffer, "Score : ");
    my_strcat(buffer, my_itoa(info_pst->score));
    sfText_setString(title_pause2, buffer);
    sfRenderWindow_drawText(info->window, title_pause2, NULL);
    sfText_destroy(title_pause2);
    sfFont_destroy(font2);
}

int display_win(map_run *info, map_pst *info_pst)
{
    int p_1 = 0;

    if (info->game_mode != 3 || info->menu == 1)
        return 0;
    info_pst->dino_pst_act = 0;
    button_press_bgd(info);
    win_text(info);
    win_text_2(info, info_pst);
    mouse_button_win(info, &p_1);
    button_win_press_btn_1(info, p_1);
    return 0;
}

void text_game_over(map_run *info)
{
    sfFont *font;
    font = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_pause = sfText_create();
    sfVector2f x_y = {370, 140};
    sfText_setPosition(title_pause, x_y);
    sfText_setCharacterSize(title_pause, 150);
    sfText_setColor(title_pause, sfWhite);
    sfText_setFont(title_pause, font);
    sfText_setString(title_pause, "Game over");
    sfRenderWindow_drawText(info->window, title_pause, NULL);
    sfText_destroy(title_pause);
    sfFont_destroy(font);
}

void text_game_over_2(map_run *info, map_pst *info_pst)
{
    char buffer[1000];

    sfFont *font2;
    font2 = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_pause2 = sfText_create();
    sfVector2f x_y2 = {820, 380};
    sfText_setPosition(title_pause2, x_y2);
    sfText_setCharacterSize(title_pause2, 40);
    sfText_setColor(title_pause2, sfWhite);
    sfText_setFont(title_pause2, font2);
    record_create(info_pst);
    my_strcpy(buffer, "Score : ");
    my_strcat(buffer, my_itoa(info_pst->score));
    sfText_setString(title_pause2, buffer);
    sfRenderWindow_drawText(info->window, title_pause2, NULL);
    sfText_destroy(title_pause2);
    sfFont_destroy(font2);
}