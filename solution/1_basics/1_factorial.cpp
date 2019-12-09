/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 11_factorial
*/

#include <iostream>

// EXERCISE : implement a tool able to compute the factorial of the input, at compile-time

// GOAL : Understand how to implement mathematical function thanks to template-programming

// SOLUTION :

template<std::size_t N>
struct my_fact {

    enum { value = N * my_fact<N - 1ul>::value };
    // this will generate code like: value = N * (N - 1) * (N - 2) ... * 2 * 1;

};

// And we stop the recursion by using template specialization :

template<>
struct my_fact<0ul> {

    enum { value = 1 };

};

int main()
{
    std::cout << my_fact<3>::value << " expect: 6" << std::endl;
    std::cout << my_fact<10>::value << " expect: 3628800" << std::endl;
    std::cout << my_fact<0>::value << " expect: 1" << std::endl;

    return 0;
}
