/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** print a full string
*/

#include <unistd.h>

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}
