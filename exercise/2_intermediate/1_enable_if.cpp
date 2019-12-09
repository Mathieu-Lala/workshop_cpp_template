/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 1_enable_if
*/

#include <iostream>

// EXERCISE : The main problem in C++ and in meta-template programming is
// compilation error. How can we make them better ? Implement a tool
// taking a condition, if true breaking the compilaton to make it more debuggable

// GOAL : Introduction to "Substitution Failure Is Not An Error"

int main()
{
    using valid_type = my_enable_if<true, char *>::type;

//#define DONT_COMPILE // NOTE : uncomment me to test your SFINAE
#ifdef DONT_COMPILE
    using nothing = my_enable_if<false, char *>::type;
#endif
}
