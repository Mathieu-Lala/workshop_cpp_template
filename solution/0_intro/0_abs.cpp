/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 00abs - solution
*/

#include <iostream>

// EXERCISE : implement a function returning the absolute value of the argument
// regarless of the type

// GOAL : Understand how to write template in C++, and how we can use them

// SOLUTION :

template<typename T>
T my_abs(T x)
{
    return x < T(0) ? -x : x;
}

int main()
{
    std::cout << my_abs(-42) << " expect: 42" << std::endl;
    std::cout << my_abs(0.666f) << " expect: 0.666" << std::endl;
    std::cout << my_abs(-4000000000l) << " expect: 4000000000" << std::endl;

    return 0;
}

// PROBLEME :
// This function use severals operators on the type T : (T < T), (- T) and T(0)
// if one of them is not defined, the code won't compile
// (and the error message is very messy) be carefull how you use template !


//#define DONT_COMPILE // NOTE : comment me to compile
#ifdef DONT_COMPILE

void this_wont_compile()
{
    my_abs<std::string>("???");
}

#endif

// The solution ? Use template wisely
