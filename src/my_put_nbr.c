/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number
*/

#include <unistd.h>
#include "bootstrap.h"

int my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    if (n >= 0 && n < 10){
        my_putchar(n + 48);
    } else {
        my_put_nbr(n / 10);
        my_putchar(n % 10 + 48);
    }
    return 1;
}

char *my_strdup(char const *src)
{
    char *dest;
    int cpt2 = 0;
    int cpt = 0;

    while (src[cpt] != '\0'){
        cpt += 1;
    }
    dest = malloc((sizeof(char)) * (cpt + 1));
    while (src[cpt2] != '\0'){
        dest[cpt2] = src[cpt2];
        cpt2 += 1;
    }
    dest[cpt2] = '\0';
    return dest;
}

void my_swap(int *a, int *b)
{
    int tmp = *a;

    *a = *b;
    *b = tmp;
}
