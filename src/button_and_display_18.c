/*
** EPITECH PROJECT, 2021
** button_and_display_18.c
** File description:
** button_and_display_18.c
*/

#include "my.h"

void win_text(map_run *info)
{
    sfFont *font;
    font = sfFont_createFromFile("ressources/runner_text.ttf");
    sfText *title_pause = sfText_create();
    sfVector2f x_y = {700, 140};
    sfText_setPosition(title_pause, x_y);
    sfText_setCharacterSize(title_pause, 150);
    sfText_setColor(title_pause, sfWhite);
    sfText_setFont(title_pause, font);
    sfText_setString(title_pause, "win !");
    sfRenderWindow_drawText(info->window, title_pause, NULL);
    sfText_destroy(title_pause);
    sfFont_destroy(font);
}

int error(int len, int offset)
{
    if (len < 0)
        return (84);
    if (offset == 0)
        return (84);
    return 0;
}

char *read_file(char *file)
{
    char *buff = malloc(sizeof(char) * BUFF_SIZE);
    int offset;
    int len;
    int handle = (open(file, O_RDONLY));

    offset = 0;
    if (handle == -1) {
        return "null";
    }
    while ((len = read(handle, buff + offset, BUFF_SIZE + offset)) > 0)
        offset += len;
    buff[offset] = '\0';
    close(handle);
    if (error(len, offset) == 84)
        return "null";
    return buff;
}

FILE *create_file(FILE *file)
{
    file = fopen("record.txt", "w");
    if (file == NULL)
        file = fopen("record.txt", "a");
    return file;
}

void rac(FILE *file)
{
    file = create_file(file);
    fwrite("0", 1 , my_strlen("0"), file);
}