/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** LIBRAIRIE
*/

int len(char const *str, int i)
{
    int k = 0;

    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
        i++;
        k++;
    }
    return (k);
}

int p(int nb, int power)
{
    int rest = 1;
    int ref = nb;

    while (power >= 1) {
        rest = rest * ref;
        power--;
    }
    return (rest);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int size = 0;
    int result = 0;

    while (str[i] != '\0' && (str[i] < '0' || str[i] > '9')) {
        if (str[i] == '-') {
            sign = sign * -1;
         }
        i++;
    }
    size = len(str, i);
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9')) {
        result = result + ((str[i] - '0') * p(10, size - 1));
        size--;
        i++;
    }
    if (result <= 2147483646)
    {
        return (result * sign);
    } else {
        return (0);
    }
}
