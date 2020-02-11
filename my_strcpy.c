/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** copy a string in a second string
*/

#include <stddef.h>
#include <stdlib.h>

char *my_strcpy(char *dest, char const *src)
{
    int t = 0;

    for (; src[t]; t++)
        dest[t] = src[t];
    dest[t] = '\0';
    return (dest);
}
