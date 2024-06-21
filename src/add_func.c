/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number
*/
#include "bootstrap.h"

int args_nb_check(char **av)
{
    float modulo_i = 0;
    int i = 0;

    while (av[i] != NULL)
        i++;
    if (i == 0)
        return -1;
    modulo_i = i % 2;
    i = i / 2;
    if (modulo_i == 0)
        return 0;
    return -1;
}

linked_list_t *init_node(int id, char *type, char *value)
{
    linked_list_t *tmp = malloc(sizeof(linked_list_t));

    tmp->id = id;
    tmp->data = my_strdup(type);
    tmp->str = my_strdup(value);
    tmp->next = NULL;
    return tmp;
}

int add_to_list(metadata_t *data, char **av, int i)
{
    int list_size = linked_len(data->list);
    char *type = av[i];
    char *value = av[i + 1];
    linked_list_t *first;

    if (type_value(av[i]) == -1)
        return 84;
    if (list_size == 0) {
        data->list = init_node(0, type, value);
        display_add(data->list);
    } else {
        first = init_node(linked_len(data->list), type, value);
        first->next = data->list;
        data->list = first;
        display_add(data->list);
    }
    return 0;
}

int add(void *data, char **av)
{
    int i = args_nb_check(av);
    int error = 0;

    if (i == 0) {
        for (int i = 0; av[i] != NULL; i = i + 2) {
            error = add_to_list(data, av, i);
        }
    } else {
        return 84;
    }
    if (error == 84)
        return 84;
    return 0;
}
