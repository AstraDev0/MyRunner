/*
** EPITECH PROJECT, 2021
** button_and_display_16.c
** File description:
** button_and_display_16.c
*/

#include "my.h"

void collision_cactus(sfVector2f dino, map_pst *info_pst, map_run *info)
{
    sfVector2f enemy_3 = info_pst->pst_oth.enemy_3;
    sfVector2f enemy_3_2 = info_pst->pst_oth.enemy_3_2;
    sfVector2f enemy_4 = info_pst->pst_oth.enemy_4;
    dino.x += 10;
    dino.y -= 20;
    if ((dino.x >= enemy_3.x - 60) && (dino.x <= enemy_3.x + 20))
        if ((dino.y >= enemy_3.y - 100) && (dino.y <= enemy_3.y + 100))
            info->game_mode = 2;
    if ((dino.x >= enemy_3_2.x - 80) && (dino.x <= enemy_3_2.x + 130))
        if ((dino.y >= enemy_3_2.y - 100) && (dino.y <= enemy_3_2.y + 100))
            info->game_mode = 2;
    if ((dino.x >= enemy_4.x - 80) && (dino.x <= enemy_4.x + 130))
        if ((dino.y >= enemy_4.y - 100) && (dino.y <= enemy_4.y + 100))
            info->game_mode = 2;
    collision_cactus_n(dino, info_pst, info);
}

int check_collision(map_pst *info_pst, map_run *info)
{
    sfVector2f dino = info_pst->pst_dino;
    if (info->menu == 1)
        return 0;
    collision_crow(dino, info_pst, info);
    collision_cactus(dino, info_pst, info);
    return 0;
}

void button_press_bgd(map_run *info)
{
    char *chemin = "./ressources/pause_background.png";

    sfSprite *sprite_bgd = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(chemin, NULL);
    sfSprite_setTexture(sprite_bgd, texture, sfTrue);
    display_sprite(info->window, sprite_bgd);
    sfSprite_destroy(sprite_bgd);
    sfTexture_destroy(texture);
}

void button_pause_press_btn_1(map_run *info, int p_1)
{
    char *chemin_1 = "./ressources/press_button.png";
    char *chemin_2 = "./ressources/buttons_sprite.png";

    sfSprite *sprite_button_1 = sfSprite_create();
    sfTexture *texture2;
    if (p_1 == 1)
        texture2 = sfTexture_createFromFile(chemin_1, NULL);
    else
        texture2 = sfTexture_createFromFile(chemin_2, NULL);
    sfSprite_setTexture(sprite_button_1, texture2, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(sprite_button_1, factor);
    sfIntRect coordinate1 = {600, 210, 615, 200};
    sfVector2f x_y_1 = {810, 450};
    sfSprite_setPosition(sprite_button_1, x_y_1);
    sfSprite_setTextureRect(sprite_button_1, coordinate1);
    display_sprite(info->window, sprite_button_1);
    sfSprite_destroy(sprite_button_1);
    sfTexture_destroy(texture2);
}

void button_pause_press_btn_2(map_run *info, int p_2)
{
    char *chemin_1 = "./ressources/press_button.png";
    char *chemin_2 = "./ressources/buttons_sprite.png";

    sfSprite *sprite_button_2 = sfSprite_create();
    sfTexture *texture3;
    if (p_2 == 1)
        texture3 = sfTexture_createFromFile(chemin_1, NULL);
    else
        texture3 = sfTexture_createFromFile(chemin_2, NULL);
    sfSprite_setTexture(sprite_button_2, texture3, sfTrue);
    sfVector2f factor = {0.5, 0.5};
    sfSprite_setScale(sprite_button_2, factor);
    sfVector2f x_y_2 = {810, 580};
    sfSprite_setPosition(sprite_button_2, x_y_2);
    sfIntRect coordinate2 = {600, 625, 615, 200};
    sfSprite_setTextureRect(sprite_button_2, coordinate2);
    display_sprite(info->window, sprite_button_2);
    sfSprite_destroy(sprite_button_2);
    sfTexture_destroy(texture3);
}