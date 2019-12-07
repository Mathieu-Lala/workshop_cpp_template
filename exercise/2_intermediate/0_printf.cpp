/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 20_printf
*/

#include <iostream>

// EXERCISE : implement printf like function using template

// GOAL : Introduction to variadic template

int main()
{
    // we don't need to specify %s for string, %d for int ...
    // because it is templated

    my_printf("Hello %\n", "World");
    my_printf("1 % % % 5\n", 2, 3, 4);

    return 0;
}
