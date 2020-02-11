/*
** EPITECH PROJECT, 2020
** memeknaci libmy
** File description:
** appends a string to a second string
*/

#include <stdlib.h>
#include <stddef.h>

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int src_len = my_strlen(src);
    char *res = malloc(sizeof(char ) * (dest_len + src_len +1));
    int y = 0;

    if (res == NULL)
        return (NULL);
    for (;y != dest_len; y++)
        res[y] = dest[y];
    for (int a = 0; y != src_len + dest_len; y++, a++)
        res[y] = src[a];
    res[y] = '\0';
    return (res);
}
