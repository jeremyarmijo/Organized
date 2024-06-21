/*
** EPITECH PROJECT, 2023
** orga
** File description:
** sort
*/
#include "bootstrap.h"
#include "shell.h"

static void refresh_id(INIT_4, linked_list_t *current, linked_list_t *prev)
{
    if (current->id > current->next->id) {
        if (prev == NULL)
            data->list = swapy(current, current->next);
        else
            prev->next = swapy(current, current->next);
    }
}

static void swap_id(int list_size, metadata_t *data)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = data->list;

    for (int i = 0; i < list_size; ++i) {
        if (current->next == NULL)
            break;
        refresh_id(data, current, prev);
        prev = get_node(data->list, i);
        current = get_node(data->list, i + 1);
    }
}

void sort_id(metadata_t *data)
{
    int list_size = linked_len(data->list);

    if (list_size <= 1)
        return;
    for (int y = 0; y < list_size; ++y) {
        swap_id(list_size, data);
    }
}

static void refresh(INIT_4, linked_list_t *current, linked_list_t *prev)
{
    char *str = my_strdup(current->data);
    char *str2 = my_strdup(current->next->data);

    if (str[0] > str2[0]) {
        if (prev == NULL)
            data->list = swapy(current, current->next);
        else
            prev->next = swapy(current, current->next);
    }
}

static void refresh_name(INIT_4, linked_list_t *current, linked_list_t *prev)
{
    char *str = my_strdup(current->str);
    char *str2 = my_strdup(current->next->str);

    if (str[0] > str2[0]) {
        if (prev == NULL)
            data->list = swapy(current, current->next);
        else
            prev->next = swapy(current, current->next);
    }
}

static void swap_type(int list_size, metadata_t *data)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = data->list;

    for (int i = 0; i < list_size; ++i) {
        if (current->next == NULL)
            break;
        refresh(data, current, prev);
        prev = get_node(data->list, i);
        current = get_node(data->list, i + 1);
    }
}

void sort_type(metadata_t *data)
{
    int list_size = linked_len(data->list);

    if (list_size <= 1)
        return;
    for (int y = 0; y < list_size; ++y) {
        swap_type(list_size, data);
    }
}

static void swap_name(int list_size, metadata_t *data)
{
    linked_list_t *prev = NULL;
    linked_list_t *current = data->list;

    for (int i = 0; i < list_size; ++i) {
        if (current->next == NULL)
            break;
        refresh_name(data, current, prev);
        prev = get_node(data->list, i);
        current = get_node(data->list, i + 1);
    }
}

void sort_name(metadata_t *data)
{
    int list_size = linked_len(data->list);

    if (list_size <= 1)
        return;
    for (int y = 0; y < list_size; ++y) {
        swap_name(list_size, data);
    }
}

int sort_menu(char **av, metadata_t *data)
{
    if (my_strcmp("ID", av[0]) == 0) {
        sort_id(data);
        return 0;
    }
    if (my_strcmp("TYPE", av[0]) == 0) {
        sort_type(data);
        return 0;
    }
    if (my_strcmp("NAME", av[0]) == 0) {
        sort_name(data);
        return 0;
    }
    return 84;
}
