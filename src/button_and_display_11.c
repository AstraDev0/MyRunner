/*
** EPITECH PROJECT, 2021
** button_and_display_11.c
** File description:
** button_and_display_11.c
*/

#include "my.h"

void next_main(map_run *i, map_pst *m_pst, clock_var *ck)
{
    char *ressources = "./ressources/jump_dino.ogg";

    active_home(i, m_pst);
    def_active(m_pst, i);
    record_start(i, m_pst);
    clock_funtion(ck);
    set_pst_sprite(m_pst);
    i->music_menu = sfMusic_createFromFile("./ressources/music_sino.ogg");
    m_pst->jump_dino = sfSound_create();
    m_pst->jump_buff = sfSoundBuffer_createFromFile(ressources);
    sfSound_setBuffer(m_pst->jump_dino, m_pst->jump_buff);
    sfMusic_setLoop(i->music_menu, sfTrue);
    sfMusic_play(i->music_menu);
}

void condition_play_music(pst_rect *rect, map_run *info)
{
    if (info->map_oth.play_menu == 0) {
        rect->button_4.left = 2027;
        rect->button_4.top = 620;
        rect->button_4.height = 210;
        rect->button_4.width = 220;
    } else {
        rect->button_4.left = 1815;
        rect->button_4.top = 620;
        rect->button_4.height = 210;
        rect->button_4.width = 220;
    }
    if (info->map_oth.play_menu == 1 && info->game_mode == 0)
        sfMusic_setVolume(info->music_menu, 100);
    else
        sfMusic_setVolume(info->music_menu, 0);
}

int h_message(char **argv)
{
    if (argv[1] != 0) {
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            my_putstr("Finite runner created with CSFML.\n\n");
            my_putstr("USAGE\n");
            my_putstr("./my_runner map.txt\n\n");
            my_putstr("OPTIONS\n");
            my_putstr("-h print the usage and quit.\n\n");
            my_putstr("USER INTERACTIONS\n\n");
            my_putstr("SPACE_KEY\t jump.\n");
            my_putstr("UP_KEY\t\t jump.\n");
            my_putstr("LEFT_KEY\t run left.\n");
            my_putstr("RIGHT_KEY\t run right.\n");
            my_putstr("LOWER_KEY\t lower.\n");
            return 1;
        }
    }
    return 0;
}

void rect_sprite_4(pst_rect *rect)
{
    rect->end_game.left = 1040;
    rect->end_game.top = 0;
    rect->end_game.width = 150;
    rect->end_game.height = 100;
}

void rect_sprite_3(pst_rect *rect)
{
    rect->enemy_c.left = 700;
    rect->enemy_c.top = 0;
    rect->enemy_c.width = 50;
    rect->enemy_c.height = 100;
    rect->enemy_c_2.left = 850;
    rect->enemy_c_2.top = 0;
    rect->enemy_c_2.width = 100;
    rect->enemy_c_2.height = 100;
    rect->enemy_c_3.left = 700;
    rect->enemy_c_3.top = 0;
    rect->enemy_c_3.width = 100;
    rect->enemy_c_3.height = 100;
    rect->enemy_c_4.left = 440;
    rect->enemy_c_4.top = 0;
    rect->enemy_c_4.width = 75;
    rect->enemy_c_4.height = 100;
    rect_sprite_4(rect);
}