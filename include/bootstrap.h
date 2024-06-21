/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Shell Boostrap
** File description:
** bootstrap.h
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

#ifndef BOOTSTRAP_H
    #define BOOTSTRAP_H
    #define CMP_FUNC_1 int (*cmp_fct)(linked_list_t *, const char *)
    #define DEL_LIST_1 linked_list_t **delete
    #define INIT_1 linked_list_t *current = first->next
    #define INIT_2 linked_list_t *first = data->list
    #define INIT_3 linked_list_t *previous = NULL
    #define INIT_4 metadata_t *data
    #define INIT_5 linked_list_t *current
typedef enum type {
    CHAR,
    STRING,
    INTEGER,
    PLAYER
} type_t;

typedef struct player_s {
    char *name;
    int lvl;
} player_t;

typedef struct linked_list_s {
    void *data;
    int id;
    void *str;
    struct linked_list_s *next;
} linked_list_t;

typedef struct metadata_s {
    linked_list_t *list;
    int size;
} metadata_t;

void display_in_list_del(linked_list_t *data);
int to_number(char const *str);
linked_list_t *get_node(linked_list_t *list, int idx);
linked_list_t *swapy(linked_list_t *current, linked_list_t *next);
void sort_id(metadata_t *data);
void sort_type(metadata_t *data);
void sort_name(metadata_t *data);
int sort_menu(char **av, metadata_t *data);
void sort_type_reverse(metadata_t *data);
void sort_name_reverse(metadata_t *data);
void sort_id_reverse(metadata_t *data);
int sort_menu_reverse(char **av, metadata_t *data);
int del(void *data, char **av);
int check_int(char *av, int len_list);
int linked_len(linked_list_t *data);
int type_value(char *av);
int my_strcmp(char *str, char *list);
void display_add(linked_list_t *data);
void display_in_list(linked_list_t *data);
void display_list(linked_list_t *begin);
void delete(metadata_t *list);
void delete_in_list(linked_list_t **head, const char *ref, CMP_FUNC_1);
int cmp_fct(linked_list_t *head, const char *ref);
void push_back_to_list(linked_list_t **list, void *data, void *value, int id);
void push_to_list(linked_list_t **list, void *data, void *value);
int my_put_nbr(int n);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char *str);
char *my_strdup(char const *src);
void my_swap(int *a, int *b);

#endif
