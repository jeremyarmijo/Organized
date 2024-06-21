/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number
*/
#include "bootstrap.h"

linked_list_t *swapy(linked_list_t *current, linked_list_t *next)
{
    linked_list_t *etc = next->next;

    current->next = etc;
    next->next = current;
    return next;
}

linked_list_t *get_node(linked_list_t *list, int idx)
{
    if (idx < 0)
        return NULL;
    for (int i = 0; i != idx && list != NULL; ++i) {
        list = list->next;
    }
    return list;
}
