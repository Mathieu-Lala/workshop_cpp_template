/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 1_enable_if
*/

#include <iostream>
#include <type_traits> // just for std::is_arithmetic

// EXERCISE : The main problem in C++ and in meta-template programming is
// compilation error. How can we make them better ? Implement a tool
// breaking your code to make it more debuggable

// GOAL : Introduction to "Substitution Failure Is Not An Error"

// SOLUTION :

template<bool B, typename T = void>
struct my_enable_if
{
};

template<typename T>
struct my_enable_if<true, T>
{
    using type = T;
};


// USAGE :

template<
    typename T,
    // this way, if T is not arithmetic, we break the compilation
    typename my_enable_if<std::is_arithmetic<T>::value, bool>::type = 0
>
T my_abs(T x)
{
    return x < T(0) ? -x : x;
}

int main()
{
    std::cout << my_abs(-3) << std::endl;

//#define DONT_COMPILE // NOTE : uncomment me to test the SFINAE
#ifdef DONT_COMPILE
    std::cout << my_abs(std::string("this is impossible")) << std::endl;
#endif
}
