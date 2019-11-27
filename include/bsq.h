/*
** EPITECH PROJECT, 2019
** structure bsq
** File description:
** Epitech Project
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef BSQ_H
#define BSQ_H

typedef struct bsq
{
    int x;
    int y;
    int nb;
} tab_t;

static int **mall(int **map, char *buffer, int nbline);
static int **remplace_tab(char *buffer, int **map);
void check_map(char *buffer, int nbline, int **map, int length);
int main(int ac, char **av);
int my_getnbr(char const *str);
int numbercharbylign(char *buffer);
static int **remplace_tab(char *buffer, int **map);
void replacefunction(char *buffer, tab_t *bsq, int nbline, int lenght);
int calc_min(int a, int b, int c);
void check_struct(int nb, int x, int y, tab_t *bsq);
static void check_error(char *buffer, int nbline);

#endif /* BSQ_H */
