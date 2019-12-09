/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 10_first_meta - solution
*/

#include <iostream>

// EXERCISE : re-implement the previous exercise (abs and max) but this time,
// value are known at compile-time

// GOAL : First step into meta. Let's work with value

// SOLUTION :

template<typename T, T X>
struct my_abs {

#if __cplusplus >= 201103L // modern style above c++11
    static constexpr T value = X < T(0) ? -X : X;
    // this value will be know before run-time

#else // older style but the one we will use because the point is not to do modern C++
    enum { value = X < T(0) ? -X : X };

#endif

};

template<typename T, T A, T B>
struct my_max {

    enum { value = A > B };

};

int main()
{
    std::cout << my_abs<int, -42>::value << " expect: 42" << std::endl;
    std::cout << my_abs<long, -4000000000l>::value << " expect: 4000000000" << std::endl;

    std::cout << std::boolalpha <<
        my_max<int, 6, 5>::value << " expect: true" << std::endl <<
        my_max<std::size_t, 2ul, 7000000000ul>::value << " expect: false" << std::endl;

}

// this does not compile because standard don't support floating point template parameter
//    std::cout << my_abs<float, 0.666f>::value << " expect: 0.666" << std::endl;

//#define DONT_COMPILE // NOTE : comment me to compile
#ifdef DONT_COMPILE

void this_wont_compile()
{
    std::size_t first = 3;
    int second = -1;

    std::cout << my_max(first, second) << std::endl;
}

#endif

// SOLUTION : You can split floating point into 2 integral type (ex: 10,01 => (10, 01))
