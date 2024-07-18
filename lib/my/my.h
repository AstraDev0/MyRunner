/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my.h
*/

#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include "info_sprite.h"
#ifndef MY_H_INCLUDE
    #define MY_H_INCLUDE
    #define BUFF_SIZE (100000000)

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
char **my_str_to_word_array(char const *str);
char **result2(int i, char const *str, int c, int o);
char *my_strncat_custom(char *dest, char const *src, int nb, int nb2);
int my_check(char str);
int my_getnbr(char const *str);
int result_for_nbr(int variable, int mult, char const *str);
char *my_itoa(int nbr);
int my_intlen(int num);
void replace_x(int frt_edge_x, int frt_edge_y, int number_max, char **map);
char *my_strcpy(char *dest, char const *src);
char *my_strcat(char *dest, char *src);
char *read_file(char *file);
void display_sprite(sfRenderWindow *window, sfSprite *sprite);
int rdm_number(int min, int max);
sfTexture *sprite_bgd_1(map_run *info, map_pst *info_pst);
sfTexture *sprite_bgd_5(map_run *info, map_pst *info_pst);
sfTexture *sprite_bgd_5_copy(map_run *info, map_pst *info_pst);
sfTexture *sprite_floor(map_run *info, map_pst *info_pst);
sfTexture *sprite_floor_copy(map_run *info, map_pst *info_pst);
sfTexture *sprite_enemy_1(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *sprite_enemy_2(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *sprite_enemy_1_2(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *sprite_enemy_2_2(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *sprite_enemy_3(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *sprite_enemy_4(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *sprite_enemy_3_2(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *sprite_enemy_4_2(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *sprite_end_game(map_run *info, map_pst *info_pst, pst_rect *rect);
int anmt_enemy_1(map_run *info, pst_rect *rect, clock_var *clock);
int anmt_enemy_2(map_run *info, pst_rect *rect, clock_var *clock);
int anmt_enemy_1_2(map_run *info, pst_rect *rect, clock_var *clock);
int anmt_enemy_2_2(map_run *info, pst_rect *rect, clock_var *clock);
sfTexture *sprite_dino(map_run *info, map_pst *info_pst, pst_rect *rect);
int anmt_dino_2(map_run *info, map_pst *pst, pst_rect *rct, clock_var *ck);
int anmt_dino(map_run *info, map_pst *pst, pst_rect *rect, clock_var *ck);
int display_score(map_run *info, map_pst *info_pst, clock_var *clock);
void displ_sprite_map_n_2(map_run *info, map_pst *info_pst, clock_var *clock);
void displ_sprite_map_n(map_run *info, map_pst *info_pst, clock_var *clock);
void displ_sprite_map(map_run *info, map_pst *info_pst, clock_var *clock);
void destroy_texture_next(texture *texture, map_run *info);
void destroy_texture(texture *texture, map_run *info);
void jump_dino(map_run *info, map_pst *info_pst, clock_var *clock);
sfTexture *bgd_menu(map_run *info, map_pst *info_pst);
sfTexture *button_1_menu(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *button_2_menu(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *button_3_menu(map_run *info, map_pst *info_pst, pst_rect *rect);
sfTexture *button_4_menu(map_run *info, map_pst *info_pst, pst_rect *rect);
void title_menu(map_run *info);
void destroy_menu(texture *texture, map_run *info);
void create_sprite_menu(map_run *info);
void display_record(map_run *info, map_pst *info_pst);
void display_menu(map_run *info, map_pst *info_pst, pst_rect *rect);
int dpy_g_n(map_run *info, map_pst *info_pst, pst_rect *rect, clock_var *ck);
int minus_var(int val);
int display_enemy_1(map_run *info, map_pst *info_pst, clock_var *clock);
int display_enemy_2(map_run *info, map_pst *info_pst, clock_var *clock);
int display_enemy_1_2(map_run *info, map_pst *info_pst, clock_var *clock);
int display_enemy_2_2(map_run *info, map_pst *info_pst, clock_var *clock);
int display_enemy_3(map_run *info, map_pst *info_pst, clock_var *clock);
int display_enemy_4(map_run *info, map_pst *info_pst, clock_var *clock);
int display_enemy_3_2(map_run *info, map_pst *info_pst, clock_var *clock);
int display_enemy_4_2(map_run *info, map_pst *info_pst, clock_var *clock);
int display_end_game(map_run *info, map_pst *info_pst, clock_var *clock);
void value_act(map_run *info);
void value_act_2(map_run *info);
void next_value_act_3(map_run *info, int v, char **array);
void value_act_3(map_run *info);
void redirec_dis_en_next(map_run *info, map_pst *info_pst, clock_var *clock);
void restart_var(map_run *info, clock_var *clock);
int redirec_dis_en(map_run *info, map_pst *info_pst, clock_var *clock);
void dspy_g_next(map_run *info, map_pst *if_pst, pst_rect *rect, texture *tex);
void title_menu_2(map_run *info);
void des(sfTexture *texture, sfSprite *sprite , map_run *info);
void button_level_1(map_run *info, map_pst *info_pst);
void button_level_2(map_run *info, map_pst *info_pst);
void button_level_3(map_run *info, map_pst *info_pst);
void button_level_4(map_run *info, map_pst *info_pst, sfIntRect but);
void button_level_5(map_run *info, map_pst *info_pst);
void display_menu_2(map_run *info, map_pst *info_pst, pst_rect *rect);
int menu_2(map_run *info, map_pst *info_pst, pst_rect *rect);
int dispy_g(map_run *info, map_pst *info_pst, pst_rect *rect, clock_var *clock);
int dest_sprite_di(map_run *info, sfRenderWindow *window, map_pst *info_pst);
void set_pst_sprite_next(map_pst *info_pst, sfVector2f x_y);
void set_pst_sprite(map_pst *info_pst);
void init_sprite(map_run *info);
void edit_position_next_2(map_run *info, map_pst *info_pst);
int edit_position(map_run *info, map_pst *info_pst, clock_var *clock);
void clock_funtion_next(clock_var *clock);
void clock_funtion(clock_var *clock);
void def_active(map_pst *info_pst, map_run *info);
void active_home(map_run *info, map_pst *info_pst);
void record_start(map_run *info, map_pst *info_pst);
void next_main(map_run *i, map_pst *m_pst, clock_var *ck);
void condition_play_music(pst_rect *rect, map_run *info);
int h_message(char **argv);
void rect_sprite_4(pst_rect *rect);
void rect_sprite_3(pst_rect *rect);
void rect_sprite_2(pst_rect *rect, map_run *info);
int_least64_t rect_sprite(pst_rect *rect, map_run *info, char **argv);
void next_button_press(map_run *info, int mouse_x, int mouse_y);
int button_pause(map_run *info, sfEvent event, map_pst *info_pst);
int press_mode_game_n(map_run *info, map_pst *info_pst);
int press_mode_game(map_pst *info_pst, map_run *info, sfEvent event);
int button_menu_pressed(map_run *info, sfEvent event, map_pst *info_pst);
void change_map(map_run *info, map_pst *info_pst, char *file);
void button_menu_pressed_2_n(map_run *info, sfEvent event, map_pst *info_pst);
int button_menu_pressed_2(map_run *info, sfEvent event, map_pst *info_pst);
void button_press(map_run *i, sfEvent event, map_pst *info_pst, clock_var *ck);
void next_main_3(map_pst *info_pst, map_run *info, clock_var *ck);
void dino_shift(map_pst *info_pst, sfEvent event);
void active_shift(map_pst *info_pst, sfEvent event);
void valid_stop_dino(sfEvent event, map_pst *info_pst);
void dino_jump_check(sfEvent event, map_pst *info_pst);
void quit_game(map_pst *info_pst, map_run *info);
void collision_crow_n(sfVector2f dino, map_pst *info_pst, map_run *info);
void collision_crow(sfVector2f dino, map_pst *info_pst, map_run *info);
void collision_cactus_n(sfVector2f dino, map_pst *info_pst, map_run *info);
void collision_cactus(sfVector2f dino, map_pst *info_pst, map_run *info);
int check_collision(map_pst *info_pst, map_run *info);
void button_press_bgd(map_run *info);
void button_pause_press_btn_1(map_run *info, int p_1);
void button_pause_press_btn_2(map_run *info, int p_2);
void button_pause_press_font(map_run *info);
void mouse_button_pause(map_run *info, int *p_1, int *p_2);
int button_pause_press(map_run *info, map_pst *info_pst);
void button_win_press_btn_1(map_run *info, int p_1);
void mouse_button_win(map_run *info, int *p_1);
void win_text(map_run *info);
int error(int len, int offset);
char *read_file(char *file);
FILE *create_file(FILE *file);
void rac(FILE *file);
void record_create(map_pst *info_pst);
void win_text_2(map_run *info, map_pst *info_pst);
int display_win(map_run *info, map_pst *info_pst);
void text_game_over(map_run *info);
void text_game_over_2(map_run *info, map_pst *info_pst);
void button_game_over_press_btn_1(map_run *info, int p_1);
void button_game_over_press_btn_2(map_run *info, int p_2);
void mouse_button_game_over(map_run *info, int *p_1, int *p_2);
int game_over(map_run *info, map_pst *info_pst);
int pause_button_next(map_run *info, int p_1);
int pause_button(map_run *info);
void button_mode_press(map_run *info, map_pst *info_pst);
int button_menu_2(map_pst *info_pst, map_run *info, sfEvent event);
void next_main_2(sfEvent ev, map_pst *info_pst, map_run *info, clock_var *ck);
int destroy_win_and_music(map_run *info, map_pst *info_pst);
void score_restart(map_run *info, map_pst *info_pst, clock_var *clock);
int start_game(int argc, char **argv, map_run *info);
int str_array_map(char *buff, int ac, char **av);
int open_map(int ac, char **av);
void display_limit(char *text, map_run *info);
void limit_text(map_run *info, clock_var *clock);
int press_limit(clock_var *ck, map_run *i, sfEvent event);
#endif