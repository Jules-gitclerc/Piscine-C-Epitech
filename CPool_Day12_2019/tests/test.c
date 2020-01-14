/*
** EPITECH PROJECT, 2019
** CPool_Day12_2019
** File description:
** test
*/

#include <criterion/criterion.h>
#include <stdlib.h>

int cat(int ac, char **av);

Test(cat, test_cat_01)
{
    char * av[] = {"./unit_tests", "../tests/"};
    cr_assert_eq(cat(2, av), 84);
}

Test(cat, test_cat_02)
{
    char * av[] = {"./unit_tests", "../tests/fsdgyysydg"};
    cr_assert_eq(cat(2, av), 84);
}

Test(cat, test_cat_03)
{
    char * av[] = {"./unit_tests", "../tests/private_file"};
    cr_assert_eq(cat(2, av), 84);
}

Test(cat, test_cat_04)
{
    char * av[] = {"./unit_tests", "../tests/test_04"};
    cr_assert_eq(cat(2, av), 0);
}