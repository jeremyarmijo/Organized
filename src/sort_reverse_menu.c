/*
** EPITECH PROJECT, 2023
** orga
** File description:
** sort
*/
#include "bootstrap.h"
#include "shell.h"

static void refresh_reverse_string(INIT_4, INIT_5, linked_list_t *prev)
{
    char *str = my_strdup(current->data);
    char *str2 = my_strdup(current->next->data);

    if (str[0] < str2[0]) {
        if (prev == NULL)
            data->list = swapy(current, current->next);
        else
            prev->next = swapy(current, current->next);
    }
}

static void refresh_reverse_name(INIT_4, INIT_5, linked_list_t *prev)
{
    char *str = my_strdup(current->str);
    char *str2 = my_strdup(current->next->str);

    if (str[0] < str2[0]) {
        if (prev == NULL)
            data->list = swapy(current, current->next);
        else
            prev->next = swapy(current, current->next);
    }
}

static void swap_type_reverse(int list_size, metadata_t *data)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = data->list;

    for (int i = 0; i < list_size; ++i) {
        if (current->next == NULL)
            break;
        refresh_reverse_string(data, current, prev);
        prev = get_node(data->list, i);
        current = get_node(data->list, i + 1);
    }
}

void sort_type_reverse(metadata_t *data)
{
    int list_size = linked_len(data->list);

    if (list_size <= 1)
        return;
    for (int y = 0; y < list_size; ++y) {
        swap_type_reverse(list_size, data);
    }
}

static void swap_name_reverse(int list_size, metadata_t *data)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = data->list;

    for (int i = 0; i < list_size; ++i) {
        if (current->next == NULL)
            break;
        refresh_reverse_name(data, current, prev);
        prev = get_node(data->list, i);
        current = get_node(data->list, i + 1);
    }
}

void sort_name_reverse(metadata_t *data)
{
    int list_size = linked_len(data->list);

    if (list_size <= 1)
        return;
    for (int y = 0; y < list_size; ++y) {
        swap_name_reverse(list_size, data);
    }
}

static void refresh_id_reverse(INIT_4, INIT_5, linked_list_t *prev)
{
    if (current->id < current->next->id) {
        if (prev == NULL)
            data->list = swapy(current, current->next);
        else
            prev->next = swapy(current, current->next);
    }
}

static void swap_id_reverse(int list_size, metadata_t *data)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = data->list;

    for (int i = 0; i < list_size; ++i) {
        if (current->next == NULL)
            break;
        refresh_id_reverse(data, current, prev);
        prev = get_node(data->list, i);
        current = get_node(data->list, i + 1);
    }
}

void sort_id_reverse(metadata_t *data)
{
    int list_size = linked_len(data->list);

    if (list_size <= 1)
        return;
    for (int y = 0; y < list_size; ++y) {
        swap_id_reverse(list_size, data);
    }
}

int sort_menu_reverse(char **av, metadata_t *data)
{
    if (my_strcmp("ID", av[0]) == 0) {
        sort_id_reverse(data);
        return 0;
    }
    if (my_strcmp("TYPE", av[0]) == 0) {
        sort_type_reverse(data);
        return 0;
    }
    if (my_strcmp("NAME", av[0]) == 0) {
        sort_name_reverse(data);
        return 0;
    }
    return 84;
}
