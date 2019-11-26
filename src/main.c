/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Epitech Project
*/

#include "../include/bsq.h"

int my_getnbr(char const *str);

int main(int ac, char **av)
{
    char *buffer;
    int length;
    int filez;
    int fd;
    struct stat info;

    if (ac != 2)
        return (84);
    stat(av[1], &info);
    length = info.st_size;
    buffer = malloc(sizeof(char) * length + 2);
    int nbline = my_getnbr(buffer);
    int **map = malloc(sizeof(int *) * nbline + 1);
    fd = open(av[1], O_RDONLY);
    filez = read(fd, buffer, length);
    buffer[length + 1] = '\0';

    if (length <= 0)
        return (84);
    check_map(buffer, nbline, map, length);
}