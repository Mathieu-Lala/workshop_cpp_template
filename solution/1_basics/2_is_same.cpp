/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 12_is_same - solution
*/

#include <iostream>

// EXERCISE : implement a tool able to check if two type are the same

// GOAL : Meta programming : Let's work around type

// SOLUTION :

template<typename T, typename U>
struct my_is_same {

    enum { value = false };

};

template<typename T>
struct my_is_same<T, T> { // <T, T> to specify that we want two input

    enum { value = true };

};

int main()
{
    std::cout << std::boolalpha;
    std::cout << my_is_same<char, char>::value << " expect: true" << std::endl;
    std::cout << my_is_same<int, double>::value << " expect: false" << std::endl;
    std::cout << my_is_same<float, long>::value << " expect: false" << std::endl;

    // value will be true only if the two types are exaclty the same,
    // in some case we don't want that presicion :

    std::cout << (
        my_is_same<char, const char>::value ||
        my_is_same<char, unsigned char>::value ||
        my_is_same<char, volatile char>::value ||
        my_is_same<char, char &>::value ||
        my_is_same<char, const char &>::value ||
        my_is_same<char, char &&>::value)
     << " expect: false" << std::endl;

    // This can also be used at run-time, ever heard of decltype ?

    int a = 0;
    int b = 0;
    const int c = 0;

    std::cout << my_is_same<decltype(a), decltype(b)>::value << " expect: true" << std::endl;
    std::cout << my_is_same<decltype(a), decltype(c)>::value << " expect: false" << std::endl;

    return 0;
}
