/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 30_has_sort - exercise
*/

#include <iostream>

// EXERCISE : std::sort is the way to sort data in C++
// but sometimes we want to use custom sorter. Implement a tool that tell
// you if an input type contain a method sort

// GOAL : Let's go insanity

struct my_data {

    void sort() {}

};

int main()
{
    std::cout << has_sort<my_data>::value << " expect: true" << std::endl;
    std::cout << has_sort<int>::value << " expect: false" << std::endl;

    return 0;
}
