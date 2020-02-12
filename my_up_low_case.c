/*
** EPITECH PROJECT, 2019
** my_strlowcase.c
** File description:
** my_strlowcase
*/

static char *my_strupcase(char *str)
{
    for (int t = 0; str[t]; t++) {
        if (str[t] >= 'a' && str[t] <= 'z' )
            str[t] -= 32;
    }
    return (str);
}

static char *my_strlowcase(char *str)
{
    for (int t = 0; str[t]; t++) {
        if (str[t] >= 'A' && str[t] <= 'Z' )
            str[t] += 32;
    }
    return (str);
}

char *up_or_low_case(char *str, char choice)
{
    if (choice == 'u')
        str = my_strupcase(str);
    else if (choice == 'l')
        str = my_strlowcase(str);
    return (str);
}
