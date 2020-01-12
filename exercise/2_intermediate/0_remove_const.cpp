/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 20_remove_const - exercise
*/

#include <iostream>

// EXERCISE : implement a tool that take a type as parameter and
// return the same type without constness

// GOAL : Meta programming : Let's work around type and specialization

int main()
{
    using not_const_const_char = my_remove_const<const char>::type;

    not_const_const_char c = 'A';
    c = 'Z';

    using not_const_string = my_remove_const<std::string>::type;

    not_const_string str("Hello world");
    str = "World Hello";

    return 0;
}
