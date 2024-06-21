/*
** EPITECH PROJECT, 2023
** orga
** File description:
** sort
*/
#include "bootstrap.h"
#include "shell.h"

int sort(void *data, char **av)
{
    int i = 0;

    while (av[i] != NULL)
        i++;
    if (av[0] == NULL || i >= 4)
        return 84;
    if (av[0] != NULL && av[1] == NULL) {
        if (my_strcmp("TYPE", av[0]) == 0
            || my_strcmp("NAME", av[0]) == 0
            || my_strcmp("ID", av[0]) == 0) {
            sort_menu(av, data);
            return 0;
        }
    } else if (av[1] != NULL && my_strcmp("-r", av[1]) == 0) {
        sort_menu_reverse(av, data);
        return 0;
    }
    return 84;
}

int disp(void *data, char **av)
{
    metadata_t *head = data;

    if (av[0] == NULL) {
        display_list(head->list);
        return 0;
    } else
        return 84;
}

metadata_t *init_metadata(void)
{
    metadata_t *tmp = malloc(sizeof(metadata_t));

    tmp->list = NULL;
    tmp->size = 0;
    return tmp;
}

int main(int ac, char **av)
{
    metadata_t *head = init_metadata();
    int rtrn = 0;

    (void)av;
    if (ac > 1)
        return 84;
    rtrn = workshop_shell(head);
    delete(head);
    return rtrn;
}
