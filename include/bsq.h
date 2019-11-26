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

int **mall(int **map, char *buffer, int nbline);
int **remplace_tab(char *buffer, int **map);
void check_map(char *buffer, int nbline, int **map, int length);
int main(int ac, char **av);
int my_getnbr(char const *str);

#endif /* BSQ_H */