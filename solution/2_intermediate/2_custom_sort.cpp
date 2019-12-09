/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 2_custom_sort
*/

#include <iostream>

// EXERCISE : std::sort is the simpliest way to sort data in C++
// but sometimes we want to use custom sorter. Implement that tell
// you if an input type contain a method sort

// GOAL : Let's go insanity

// SOLUTION :

struct my_container {

    void sort() {}

};

#define HAS_MEMBER(struct_name, member)  \
    template <typename T>   \
    struct struct_name       \
    {   \
        typedef char yes[1];    \
        typedef char no[2];     \
        \
        template <typename U> static yes &test(decltype(&U::member)); \
        template <typename U> static no &test(...);     \
        \
        enum { value = sizeof(test<T>(0)) == sizeof(yes) }; \
    };

HAS_MEMBER(has_sort, sort);

int main()
{
    std::cout << has_sort<my_container>::value << " expect: true" << std::endl;
    std::cout << has_sort<int>::value << " expect: false" << std::endl;

    return 0;
}
