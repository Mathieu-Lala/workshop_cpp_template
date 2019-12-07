/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 15_conditional - exercise
*/

#include <iostream>

// EXERCISE : implement a tool that take a condition and two types
// returning the first type if the condition is true, the second otherwise

// GOAL : Meta programming : Let's work around condition

// copy your my_is_same in this file

int main()
{
    using type_1 = my_conditional<true, char, const short>::type;
    using type_2 = my_conditional<false, long, unsigned int>::type;

    static_assert(my_is_same<type_1, char>::value);
    static_assert(my_is_same<type_2, unsigned int>::value);

    return 0;
}
