/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** LIBRAIRIE
*/

#include <unistd.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    int i = 0;

    if (str == NULL) {
        return (1);
    }

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return (0);
}
