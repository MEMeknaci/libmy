/*
65;5604;1c** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** return a pointer to a new copy of a string
*/

#include <stdlib.h>
#include <string.h>

char *my_strndup(char const *s, size_t n)
{
    char *dup = malloc(sizeof(char) * (n + 1));

    if (dup == NULL)
        return (NULL);
    my_strncpy(dup, s, n);
    return (dup);
}

void main(void)
{
    char *ok = my_strndup("coucou", 3);
    printf("%s\n", ok);
}
