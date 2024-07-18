/*
** EPITECH PROJECT, 2021
** info_sprite.h
** File description:
** info_sprite.h
*/

#ifndef INFO_SPRITE
    #define INFO_SPRITE
    typedef struct map_run_others map_run_others;
    struct map_run_others {
        int play_menu;
        sfSprite *enemy_1;
        sfSprite *enemy_2;
        sfSprite *enemy_1_2;
        sfSprite *enemy_2_2;
        sfSprite *enemy_3;
        sfSprite *enemy_4;
        sfSprite *enemy_3_2;
        sfSprite *enemy_4_2;
        sfSprite *end_game;
        int enemy_1_act;
        int enemy_2_act;
        int enemy_1_2_act;
        int enemy_2_2_act;
        int enemy_3_act;
        int enemy_4_act;
        int enemy_3_2_act;
        int enemy_4_2_act;
        int end_game_act;
    };

    typedef struct map_run map_run;
    struct map_run {
        sfRenderWindow *window;
        int menu;
        sfSprite *background_1;
        sfSprite *background_5_copy;
        sfSprite *background_5;
        sfSprite *floor;
        sfSprite *floor_copy;
        sfSprite *dino;
        sfSprite *background_menu;
        sfSprite *button_1;
        sfSprite *button_2;
        sfSprite *button_3;
        sfSprite *button_4;
        sfMusic *music_menu;
        map_run_others map_oth;
        char **map;
        int map_block;
        int game_mode;
    };

    typedef struct text_other text_other;
    struct text_other {
        sfTexture *enemy_3;
        sfTexture *enemy_4;
        sfTexture *enemy_3_2;
        sfTexture *enemy_4_2;
        sfTexture *end_game;
    };

    typedef struct texture texture;
    struct texture {
        sfTexture *background_1;
        sfTexture *background_5_copy;
        sfTexture *background_5;
        sfTexture *floor;
        sfTexture *floor_copy;
        sfTexture *dino;
        sfTexture *background_menu;
        sfTexture *button_1;
        sfTexture *button_2;
        sfTexture *button_3;
        sfTexture *button_4;
        sfTexture *enemy_1;
        sfTexture *enemy_2;
        sfTexture *enemy_1_2;
        sfTexture *enemy_2_2;
        text_other text_oth;
    };

    typedef struct pst_oth pst_oth;
    struct pst_oth {
        sfVector2f enemy_3;
        sfVector2f enemy_4;
        sfVector2f enemy_3_2;
        sfVector2f enemy_4_2;
        sfVector2f end_game;
        int menu_2;
        char **av;
    };

    typedef struct map_pst map_pst;
    struct map_pst {
        sfVector2f pst_bgd_1;
        sfVector2f pst_bgd_5_copy;
        sfVector2f pst_bgd_5;
        sfVector2f pst_floor;
        sfVector2f pst_floor_copy;
        sfVector2f pst_dino;
        sfVector2f enemy_1;
        sfVector2f enemy_2;
        sfVector2f enemy_1_2;
        sfVector2f enemy_2_2;
        int dino_jump;
        sfSound *jump_dino;
        sfSoundBuffer *jump_buff;
        int dino_pst_act;
        int dino_lower;
        pst_oth pst_oth;
        int score;
        int score_restart;
        int record;
    };

    typedef struct clock_oth clock_oth;
    struct clock_oth {
        sfClock *map_block;
        sfClock *end_game;
        sfClock *end_game_act;
        sfClock *score;
        int limit;
    };

    typedef struct clock_var clock_var;
    struct clock_var {
        sfClock *bgd_1;
        sfClock *dino;
        sfClock *enemy_1;
        sfClock *enemy_2;
        sfClock *enemy_1_2;
        sfClock *enemy_2_2;
        sfClock *enemy_1_act;
        sfClock *enemy_2_act;
        sfClock *enemy_1_2_act;
        sfClock *enemy_2_2_act;
        sfClock *enemy_3_act;
        sfClock *enemy_4_act;
        sfClock *enemy_3_2_act;
        sfClock *enemy_4_2_act;
        sfClock *enemy_3;
        sfClock *enemy_4;
        sfClock *enemy_3_2;
        sfClock *enemy_4_2;
        clock_oth c_oth;
    };

    typedef struct pst_rect pst_rect;
    struct pst_rect {
        sfIntRect dino;
        sfIntRect allow_dino;
        sfIntRect button_1;
        sfIntRect button_2;
        sfIntRect button_3;
        sfIntRect button_4;
        sfIntRect enemy_1;
        sfIntRect enemy_2;
        sfIntRect enemy_1_2;
        sfIntRect enemy_2_2;
        sfIntRect enemy_c;
        sfIntRect enemy_c_2;
        sfIntRect enemy_c_3;
        sfIntRect enemy_c_4;
        sfIntRect end_game;
    };
#endif /* !d */