/*
** EPITECH PROJECT, 2019
** My bsq 
** File description:
** Epitech Project
*/

#include "../include/bsq.h"

int **mall(int **map, char *buffer, int nbline)
{
    int i = 0;
    int x = 0;

    while (buffer[i] != '\n')
        i++;
    while (x <= nbline) {
        map[x] = malloc(sizeof(int) * i + 1);
        x++;
    }
    return (map);
}

int **remplace_tab(char *buffer, int **map)
{
    int i = 0;
    int x = 0;
    int y = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] != '\n') {
            if (buffer[i] == '.')
                map[y][x] = 1;
            else if (buffer[i] == 'o')
                map[y][x] = 0;
            x++;
        } else {
            map[y][x] = -1;
            y++;
            x = -1;
        }
        i++;
    }
    map[y] = NULL;
    return (map);
}

void check_map(char *buffer, int nbline, int **map, int length)
{
    int i = 0;
    tab_t *bsq = malloc(sizeof(tab_t));
    bsq->nb = 0;

    while (buffer[i] != '.' && buffer[i] != 'o')
        i++;
    map = mall(map, &buffer[i], nbline);
    map = remplace_tab(&buffer[i], map);
    calc_tab(map, bsq);
    replacefunction(&buffer[i], bsq, nbline, length);
}