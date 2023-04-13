/*
** EPITECH PROJECT, 2023
** Init-Repo [WSL : Ubuntu-20.04]
** File description:
** main
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/calculator.h"

static void print_usage(void)
{
    printf("USAGE :\n");
    printf("\t./calculate number_one number_two operator\n");
    printf("DESCRIPTION :\n");
    printf("\tnumber_one\tfirst number\n");
    printf("\tnumber_two\tsecond number\n");
    printf("\toperator\toperator between the two numbers\n");
    printf("\tcalculate\tthis progam will calculate the two \
    numbers passed in parameter\n");
}

int main(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        print_usage();
    else if (ac == 4)
        return choose_operation(atoi(av[1]), atoi(av[2]), av[3]);
    else
        return (84);
    return (0);
}
