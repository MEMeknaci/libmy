/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** reverse character in a string
*/

char *my_revstr(char *str)
{
    int f = my_strlen(str) - 1;
    char t = 0;

    for (int d = 0; d < f; d++, f--) {
        t = str[d];
        str[d] = str[f];
        str[f] = t;
    }
    return (str);
}
