/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Setting Up Shell
** File description:
** shell.h
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef SHELL_H
    #define SHELL_H

int add(void *data, char **args);
int del(void *data, char **args);
int sort(void *data, char **args);
int disp(void *data, char **args);
int workshop_shell(void *data);

#endif
