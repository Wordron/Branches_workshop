/*
** EPITECH PROJECT, 2023
** Branches_pr_review [WSL : Ubuntu-20.04]
** File description:
** choose_operation
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../include/calculator.h"

int choose_operation(int nb1, int nb2, char *op)
{
    if (strcmp(op, "+") == 0) {
        printf("The result is : %d\n", add_numbers(nb1, nb2));
        return 0;
    }
    return (84);
}
