/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 00abs - exercise
*/

#include <iostream>

// EXERCISE : implement a function returning the absolute value of the argument
// regarless of the type

// GOAL : Understand how to write template in C++, and how we can use them

int main()
{
    std::cout << my_abs(-42) << " expect: 42" << std::endl;
    std::cout << my_abs(0.666f) << " expect: 0.666" << std::endl;
    std::cout << my_abs(-4000000000l) << " expect: 4000000000" << std::endl;

    return 0;
}
