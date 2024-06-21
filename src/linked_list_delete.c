/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number
*/
#include "bootstrap.h"

int cmp_fct(linked_list_t *head, const char *ref)
{
    int id_ref = *ref - 48;

    if (head->id == id_ref)
        return 1;
    return 0;
}

void del_first_el(const char **ref, linked_list_t **tmp, DEL_LIST_1)
{
    while ((*tmp)->next != NULL && cmp_fct(*tmp, *ref) == 1) {
        *delete = *tmp;
        *tmp = (*tmp)->next;
        free(*delete);
    }
}

void delete_in_list(linked_list_t **head, const char *ref, CMP_FUNC_1)
{
    linked_list_t *tmp = *head;
    linked_list_t *prev = NULL;

    linked_list_t *delete = NULL;
    del_first_el(&ref, &tmp, &delete);
    *head = tmp;
    prev = tmp;
    while (tmp->next != NULL) {
        if (cmp_fct(tmp, ref) == 1){
            delete = tmp;
            prev->next = tmp->next;
            tmp = prev->next;
            free(delete);
        } else {
            prev = tmp;
            tmp = tmp->next;
        }
    }
}

void delete(metadata_t *head)
{
    linked_list_t *tmp;

    while (head->list != NULL) {
        tmp = head->list;
        head->list = head->list->next;
        free(tmp);
    }
}
