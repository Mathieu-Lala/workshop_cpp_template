/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 10_first_meta - exercise
*/

#include <iostream>

// EXERCISE : re-implement the previous exercise (abs and max) but this time,
// value are known at compile-time

// GOAL : First step into meta. Let's work with value

int main()
{
    std::cout << my_abs<int, -42>::value << " expect: 42" << std::endl;
    std::cout << my_abs<long, -4000000000l>::value << " expect: 4000000000" << std::endl;

    std::cout << std::boolalpha <<
        my_max<int, 6, 5>::value << " expect: true" << std::endl <<
        my_max<std::size_t, 2ul, 7000000000ul>::value << " expect: false" << std::endl;

}
