/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 01max - solution
*/

#include <iostream>

// EXERCISE : implement a function returning true if the first argument
// is greater than the second one, false otherwise, regardeless of the type

// GOAL : Understand how to write template in C++, and how we can use them

// SOLUTION :

template<typename T>
bool my_max(T a, T b)
{
    return a > b;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << my_max(3, 5) << " expect: false" << std::endl;
    std::cout << my_max(42000.0f, 0.42000f) << " expect: true" << std::endl;

    return 0;
}

// PROBLEME :
// If the argument have different type and cannot be implicitly converted
// the code won't compile


//#define DONT_COMPILE // NOTE : comment me to compile
#ifdef DONT_COMPILE

void this_wont_compile()
{
    std::size_t first = 3;
    int second = -1;

    std::cout << my_max(first, second) << std::endl;
}

#endif

// The solution ? Don t let the compiler deduce the type himself and tell him :

void this_work_fine()
{
    std::size_t first = 3;
    int second = -1;

    std::cout << my_max<int>(first, second) << " expect: true" << std::endl;

    // or even

    std::cout << my_max<std::size_t>(first, second) << " expect: false" << std::endl;
}
