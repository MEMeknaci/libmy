/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** compare two string s1 and s2
*/

int my_strcmp(char const *s1, char const *s2)
{
    int t = 0;

    for (; s1[t] == s2[t]; t++)
        if (s1[t] == '\0')
            return (0);
    return (s1[t] - s2[t]);
}
