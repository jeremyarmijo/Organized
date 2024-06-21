/*
** EPITECH PROJECT, 2023
** orga
** File description:
** sort
*/
#include "bootstrap.h"

int linked_len(linked_list_t *data)
{
    linked_list_t *tmp = data;
    int i = 0;

    if (data == NULL)
        return 0;
    while (tmp != NULL){
        tmp = tmp->next;
        i++;
    }
    return i;
}

static int exceptional_remove(linked_list_t *first, int id, metadata_t *data)
{
    if (first->next == NULL && first->id == id) {
        display_in_list_del(first);
        data->list = NULL;
        return 1;
    }
    return 0;
}

static void remove_node(metadata_t *data, int id)
{
    INIT_2;
    INIT_3;
    if (exceptional_remove(first, id, data) == 1)
        return;
    if (first->id == id) {
        display_in_list_del(first);
        data->list = first->next;
        return;
    }
    previous = first;
    for (INIT_1; current != NULL; current = current->next) {
        if (current->id == id) {
            display_in_list_del(current);
            previous->next = current->next;
            return;
        }
        previous = current;
    }
}

int check_int(char *av, int idmax)
{
    if (av[0] < 48 || av[0] > 58)
        return -1;
    if ((av[0] - 48) > idmax)
        return -1;
    return 0;
}

int id_max(linked_list_t *list)
{
    int idmax = 0;

    while (list != NULL) {
        if (list->id > idmax)
            idmax = list->id;
        list = list->next;
    }
    return idmax;
}

int id_exist(int id_del, linked_list_t *list)
{
    while (list != NULL) {
        if (list->id == id_del)
            return 0;
        list = list->next;
    }
    return 84;
}

int del(void *data, char **av)
{
    int idmax = id_max(((metadata_t *) data)->list);
    int nbr = 0;

    if (av[0] == NULL)
        return 84;
    for (int i = 0; av[i] != NULL; i++){
        nbr = to_number(av[i]);
        if (id_exist(nbr, ((metadata_t *) data)->list) == 84 || nbr > idmax)
            return 84;
        remove_node(data, nbr);
    }
    return 0;
}
