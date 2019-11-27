/*
** EPITECH PROJECT, 2019
** My bsq 
** File description:
** Epitech Project
*/

#include "../include/bsq.h"

void check_struct(int nb, int x, int y, tab_t *bsq);

int calc_min(int a, int b, int c);

static int **mall(int **map, char *buffer, int nbline)
{
    int i = 0;
    int x = 0;

    while (buffer[i] != '\n')
        i++;
    for (int x = 0; x <= nbline; x++)
        map[x] = malloc(sizeof(int) * (i + 1));
    return (map);
}

static int **remplace_tab(char *buffer, int **map)
{
    int i = 0;
    int y = 0;
    int x = 0;

    while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            map[y][x] = -1;
            y++;
            x = -1;
        }
        if (buffer[i] != '.' && buffer[i] != 'o' && buffer[i] != '\n')
            exit(84);
        map[y][x] = buffer[i] == '.' ? 1 : 0;
        x++;
        i++;
    }
    map[y] = NULL;
    return (map);
}

static int **calc_tab(int **map, tab_t *bsq)
{
    int x = 1;
    int y = 1;
    int a = 0;
    int b = 0;
    int c = 0;

    while (map[x] != NULL) {
        while (map[x][y] != -1) {
            a = map[x][y-1];
            b = map[x-1][y];
            c = map[x-1][y-1];
            if (map[x][y] != 0)
                map[x][y] = calc_min(a, b, c) + 1;
            else 
                map[x][y] = 0;
            check_struct(map[x][y], x, y, bsq);
            y++;
        }
        y = 1;
        x++;
    }
}

static void check_error(char *buffer, int nbline)
{
    unsigned int len = 0;

    while (buffer[len] != '\0') {
        len++;
    }
    if (len % nbline != 0)
        exit(84);
}

void check_map(char *buffer, int nbline, int **map, int length)
{
    int i = 0;
    tab_t *bsq = malloc(sizeof(tab_t));
    bsq->nb = 0;

    while (buffer[i] != '.' && buffer[i] != 'o')
        i++;
    length = length - i;
    check_error(&buffer[i], nbline);
    map = mall(map, &buffer[i], nbline);
    map = remplace_tab(&buffer[i], map);
    map = calc_tab(map, bsq); 
    replacefunction(&buffer[i], bsq, nbline, length);
}