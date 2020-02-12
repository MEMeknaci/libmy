/*
** EPITECH PROJECT, 2020
** memeknaci libmy
** File description:
** fills n bytes of the memory which is pointed by s
*/

#include <string.h>
#include <stddef.h>

char *my_memset(void *s, int c, size_t n)
{
    for (int i = 0; i < n; i++)
        ((char *) s)[i] = c;
    return (s);
}
