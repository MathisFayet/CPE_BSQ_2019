/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** LIBRAIRIE
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL) {
        return (84);
    }
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
