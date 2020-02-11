/*
** EPITECH PROJECT, 2020
** Anagram-master
** File description:
** tests.usage
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_strlen(char const *str);

int my_putstr(char const*str);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_strlen, null_str_test)
{
    int result = my_strlen(NULL);

    cr_assert_eq(84, result);
}

Test(my_strlen, basic_strlen_test)
{
    int result = my_strlen("Hello");

    cr_assert_eq(5, result);
}

Test(my_putstr, null_str_test_more)
{
    int result = my_putstr(NULL);

    cr_assert_eq(1, result);
}

Test(my_putstr, basic_test, .init = redirect_all_std)
{
    my_putstr("Hello");
    cr_assert_stdout_eq_str("Hello");
}