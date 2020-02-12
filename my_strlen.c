/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** calcul the lenght of a string
*/

#include <stddef.h>

int my_strlen(char const *s)
{
    int i = 0;

    if (s == NULL)
        return (0);
    for (; s[i]; i++);
    return (i);
}
