/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number
*/
#include "bootstrap.h"

int type_value(char *av)
{
    if (my_strcmp(av, "WIRE") == 0 || my_strcmp(av, "ACTUATOR") == 0
    || my_strcmp(av, "DEVICE") == 0 || my_strcmp(av, "PROCESSOR") == 0
    || my_strcmp(av, "SENSOR") == 0)
        return 0;
    return -1;
}
