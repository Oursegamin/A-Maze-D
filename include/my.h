/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** task02
*/

#ifndef LIB_H_
    #define LIB_H_

    #define OK 0
    #define KO 84
    #define ERR -1

    #include "amazed.h"

    #include <stdlib.h>
    #include <stddef.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <string.h>

int error_handling(int argc, char const *const *argv);

int my_putchar(char c);
void my_put_errchar(char c);
int my_putstr(char const *str);
int my_put_errstr(char const *str);
int my_strlen(char const *str);
char *my_revstr(char *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strdup(char const *src);
char *my_strndup(char const *src, int n);
char *my_strcat(char *dest, char const *src);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
char *my_strtok(char *str, char const *delimiter);
char *my_strstr(char const *str, char const *needle);
int my_arraylen(char const *const *array);
void my_putarray(char const *const *array);
char **my_arraydup(char const *const *array);

#endif /* LIB_H_ */