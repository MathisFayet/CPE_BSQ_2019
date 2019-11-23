/*
** EPITECH PROJECT, 2019
** My bsq 
** File description:
** Epitech Project
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char const *str);

int bsq(int i)
{
    return (0);
}

int main(int ac, char **av)
{
    int length;
    int filez;
    char *buffer;
    int fd;
    struct stat info;

    if (ac != 2)    
        return (84);
    stat(av[1], &info);
    length = info.st_size;
    buffer = malloc(sizeof(char) * length + 1);
    fd = open(av[1], O_RDONLY);
    filez = read(fd, buffer, length);
    buffer[filez] = '\0';
    write(1, buffer, my_strlen(buffer));
}
