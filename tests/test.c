/*
** EPITECH PROJECT, 2021
** B-PSU-100-NAN-1-1-myprintf-bastien.gerard
** File description:
** test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/calculator.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(add_numbers, test_add_numbers)
{
    cr_assert_eq(add_numbers(1, 2), 3);
}

Test(choose_operation, test_choose_operation, .init = redirect_all_std)
{
    choose_operation(1, 2, "+");
    fflush(stdout);
    cr_assert_stdout_eq_str("The result is : 3\n");
}
