/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number
*/
#include "bootstrap.h"

void display_add(linked_list_t *data)
{
    my_putstr(data->data);
    my_putstr(" n°");
    my_put_nbr(data->id);
    my_putstr(" - \"");
    my_putstr(data->str);
    my_putstr("\" added.\n");
}

void display_in_list(linked_list_t *data)
{
    if (data == NULL)
        return;
    my_putstr(data->data);
    my_putstr(" n°");
    my_put_nbr(data->id);
    my_putstr(" - \"");
    my_putstr(data->str);
    my_putstr("\"\n");
}

void display_in_list_del(linked_list_t *data)
{
    if (data == NULL)
        return;
    my_putstr(data->data);
    my_putstr(" n°");
    my_put_nbr(data->id);
    my_putstr(" - \"");
    my_putstr(data->str);
    my_putstr("\" deleted.\n");
}

void display_list(linked_list_t *begin)
{
    if (begin == NULL)
        return;
    while (begin != NULL) {
        display_in_list(begin);
        begin = begin->next;
    }
}
