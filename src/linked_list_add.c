/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number
*/
#include "bootstrap.h"

void push_to_list(linked_list_t **list, void *data, void *value)
{
    linked_list_t *element = malloc(sizeof(linked_list_t));

    element->data = my_strdup((char *)data);
    element->str = my_strdup((char *)value);
    element->id = linked_len(*list);
    element->next = NULL;
    *list = element;
}

void push_back_to_list(linked_list_t **list, void *data, void *value, int id)
{
    linked_list_t *element = malloc(sizeof(linked_list_t));
    linked_list_t *tmp;

    element->data = data;
    element->str = value;
    element->id = id;
    element->next = NULL;
    if (*list == NULL){
        *list = element;
    } else {
        tmp = *list;
        while (tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = element;
    }
}
