/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** return a double pointer to a tab whis is a copy of the param
*/

#include "../../include/my.h"
#include "../../include/minishell.h"
#include <stdlib.h>
#include <stdio.h>

int tab_width(char **tab)
{
    int count = 0;

    for (int i = 0; tab[i]; i++)
        count++;
    return (count);
}

int tab_lenght(int i, char **tab)
{
    int j = 0;

    for (j = 0; tab[i][j] != 0; j++);
    return (j);
}

char **my_tabdup(char **tab)
{
    char **dup = malloc(sizeof(char *) * (tab_width(tab) + 1));
    int i = 0;

    if (dup == NULL)
        return (NULL);
    for (i = 0; i < tab_width(tab); i++) {
        dup[i] = malloc(sizeof(char) * tab_lenght(i, tab) + 1);
        if (dup[i] == NULL)
            return (NULL);
        my_strcpy(dup[i], tab[i]);
    }
    dup[i] = NULL;
    return (dup);
}
