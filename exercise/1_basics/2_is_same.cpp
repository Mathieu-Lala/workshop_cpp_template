/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 12_is_same - exercise
*/

#include <iostream>

// EXERCISE : implement a tool able to check if two type are the same

// GOAL : Meta programming : Let's work around type

int main()
{
    std::cout << std::boolalpha;
    std::cout << my_is_same<char, char>::value << " expect: true" << std::endl;
    std::cout << my_is_same<int, double>::value << " expect: false" << std::endl;
    std::cout << my_is_same<float, long>::value << " expect: false" << std::endl;

    return 0;
}
