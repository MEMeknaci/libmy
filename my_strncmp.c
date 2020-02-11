/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** compare the first n bytes of two strings
*/

#include <string.h>

int my_strncmp(char const *s1, char const *s2, size_t n)
{
    int t = 0;

    for (; t < n - 1 && s1[t] == s2[t] && s2[t] && s1[t]; t++);
    return (s1[t] - s2[t]);
}
 
