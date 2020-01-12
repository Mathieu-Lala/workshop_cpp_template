/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 11_factorial
*/

#include <iostream>

// EXERCISE : implement a template computing the factorial of the input, at compile-time

// GOAL : Understand how to implement mathematical function thanks to template-programming

// TIPS : Recursion and Specialization ?

int main()
{
    std::cout << my_fact<3>::value << " expect: 6" << std::endl;
    std::cout << my_fact<10>::value << " expect: 3628800" << std::endl;
    std::cout << my_fact<0>::value << " expect: 1" << std::endl;

    return 0;
}
