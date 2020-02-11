/*
** EPITECH PROJECT, 2020
** memeknaci libmy
** File description:
** _strcat with a slash between strings
*/

#include <stdlib.h>
#include <stddef.h>

char *my_catslash(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int src_len = my_strlen(src);
    char *res = malloc(sizeof(char) * (dest_len + src_len + 2));
    int y = 0;

    if (res == NULL)
        return (NULL);
    for (;y != dest_len; y++)
        res[y] = dest[y];
    res[y++] = '/';
    for (int a = 0; y != src_len + dest_len + 1; y++, a++)
        res[y] = src[a];
    res[y] = '\0';
    return (res);
}
