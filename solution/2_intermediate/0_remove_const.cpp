/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 20_remove_const - solution
*/

#include <iostream>

// EXERCISE : implement a tool that take a type as parameter and
// return the same type without constness

// GOAL : Meta programming : Let's work around type and specialization

// SOLUTION :

template<typename T>
struct my_remove_const {

    using type = T;

};

template<typename T>
struct my_remove_const<const T> {

    using type = T;

};

// Feel free to implement remove_pointer, remove_volatile, remove_reference ...
// or even add_const, add_pointer, add_volatile, add_reference ...

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
