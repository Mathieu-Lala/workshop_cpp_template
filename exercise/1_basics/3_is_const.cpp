/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 13_is_const - exercise
*/

#include <iostream>

// EXERCISE : implement a tool telling if the type given is const or not

// GOAL : Meta programming : Let's work around type and specialization

int main()
{
    std::cout << std::boolalpha;
    std::cout << my_is_const<char>::value << " expect: false" << std::endl;
    std::cout << my_is_const<const std::string>::value << " expect: true" << std::endl;
    std::cout << my_is_const<decltype(26ul)>::value << " expect: false" << std::endl;

    return 0;
}
