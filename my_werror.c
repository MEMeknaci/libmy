/*
** EPITECH PROJECT, 2020
** memeknaci libmy
** File description:
** write a string in error output
*/

#include <unistd.h>

void my_werror(char const *str)
{
    write(2, str, my_strlen(str));
}
