/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
*/

#include "my.h"

void score_restart(map_run *info, map_pst *info_pst, clock_var *clock)
{
    sfTime time = sfClock_getElapsedTime(clock->c_oth.score);
    if (info->menu == 1 || info_pst->score_restart == 1) {
        info_pst->score = 0;
        sfClock_restart(clock->c_oth.score);
        info_pst->score_restart = 0;
    }
    if (info->menu == 0 && info->game_mode == 0)
        info_pst->score = sfTime_asMilliseconds(time) / 10;
}

int start_game(int argc, char **argv, map_run *info)
{
    pst_rect rect;
    clock_var clock;
    map_pst info_position;
    sfEvent event;
    sfVideoMode mode = {1920, 1080, 32};
    char *t = "my_runner";
    rect_sprite(&rect, info, argv);
    info_position.pst_oth.av = argv;
    info->window = sfRenderWindow_create(mode, t, sfDefaultStyle | sfClose, 0);
    next_main(info, &info_position, &clock);
    while (sfRenderWindow_isOpen(info->window)) {
        sfRenderWindow_clear(info->window, sfBlack);
        score_restart(info, &info_position, &clock);
        next_main_2(event, &info_position, info, &clock);
        edit_position(info, &info_position, &clock);
        dispy_g(info, &info_position, &rect, &clock);
        dest_sprite_di(info, info->window, &info_position);
    }
    return destroy_win_and_music(info, &info_position);
}

int str_array_map(char *buff, int ac, char **av)
{
    map_run info;
    info.map = my_str_to_word_array(buff);
    return start_game(ac, av, &info);
}

int open_map(int ac, char **av)
{
    char *buff = malloc(sizeof(char) * BUFF_SIZE);
    int offset;
    int len;
    int handle = (open(av[1], O_RDONLY));

    offset = 0;
    if (handle == -1) {
        write(2, "read failed\n", 12);
        return 84;
    }
    while ((len = read(handle, buff + offset, BUFF_SIZE + offset)) > 0)
        offset += len;
    buff[offset] = '\0';
    if (error(len, offset) == 84)
        return 84;
    return str_array_map(buff, ac, av);
}

int main(int argc, char **argv)
{
    if (h_message(argv) == 1)
        return 0;
    return open_map(argc, argv);
}