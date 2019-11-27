/*
** EPITECH PROJECT, 2019
** Print my bsq
** File description:
** Epitech Project
*/

#include "../include/bsq.h"

void replacefunction(char *buffer, tab_t *bsq, int nbline, int lenght)
{
    int nbchar = numbercharbylign(buffer);
    int recup = bsq->nb;
    int one = bsq->x;
    int two = bsq->y;
    int three = bsq->x;
    int display = bsq->y - recup;
    int displayback = bsq->x - recup;

    while (one > displayback) {
        while (two > display) {
            buffer[(one * nbchar + three) + two] = 'x';
            two--;
        }
        three--;
        two = bsq->y;
        one--;
    }
    write(1, buffer, lenght);
}
