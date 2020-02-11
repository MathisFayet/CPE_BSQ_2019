/*
** EPITECH PROJECT, 2019
** Print my bsq
** File description:
** Epitech Project
*/

#include "../include/bsq.h"

void replacefunction(char *buffer, tab_t *bsq, int nbline, int lenght)
{
    int nhar = numbercharbylign(buffer);
    int recup = bsq->nb;
    int one = bsq->x;
    int two = bsq->y;
    int three = bsq->x;
    int display = bsq->y - recup;
    int displayback = bsq->x - recup;

    while (one > displayback) {
        while (two > display) {
            buffer[(one * nhar + three) + two] = 'x';
            two -= 1;
        }
        three -= 1;
        two = bsq->y;
        one -= 1;
    }
    write(1, buffer, lenght);
}
