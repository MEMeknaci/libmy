/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** return a pointer to a new copy of a string
*/

#include <stdlib.h>

char *my_strdup(char const *s)
{
    char *dup = malloc(sizeof(char) * (my_strlen(s) + 1));

    if (dup == NULL)
        return (NULL);
    my_strcpy(dup, s);
    return (dup);
}
 
