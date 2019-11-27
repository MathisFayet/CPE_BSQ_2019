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
    if (ac != 2)
        return (84);
    struct stat tab;
    int fd = open(av[1], O_RDONLY);
    stat(av[1], &tab);
    int lenght = tab.st_size;
    char *buffer = malloc(sizeof(char) * (lenght + 2));
    int back = read(fd, buffer, lenght);
    int nbline = my_getnbr(buffer);
    int **map = malloc(sizeof(int *) * (nbline + 1));
    char *bufferback = buffer;

    buffer[lenght+1] = '\0';
    if (back <= 0 || nbline <= 0 || lenght <= 0 || fd <= 0)
        return (84);
    check_map(bufferback, nbline, map, lenght);
    close(fd);
    free(buffer);
}