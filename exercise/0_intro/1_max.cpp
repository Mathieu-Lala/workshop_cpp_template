/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 01max - exercise
*/

#include <iostream>

// EXERCISE : implement a function returning true if the first argument
// is greater than the second one, false otherwise, regardeless of the type

// GOAL : Understand how to write template in C++, and how we can use them

int main()
{
    std::cout << std::boolalpha;
    std::cout << my_max(3, 5) << " expect: false" << std::endl;
    std::cout << my_max(42000.0f, 0.42000f) << " expect: true" << std::endl;

    return 0;
}
