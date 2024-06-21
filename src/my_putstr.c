/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** Displays str
*/

#include <unistd.h>
#include "bootstrap.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        my_putchar(str[i]);
    }
    return 1;
}

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

int to_number(char const *str)
{
    int i = 0;
    int nbr = 0;

    while (str[i] != '\0'){
        if (str[i] < 48 || str[i] > 58)
            return -1;
        if (str[i] >= '0' && str[i] <= '9')
            nbr = nbr * 10 + str[i] - 48;
        i++;
    }
    return nbr;
}
