/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 15_conditional - solution
*/

#include <iostream>

// EXERCISE : implement a tool that take a condition and two types
// returning the first type if the condition is true, the second otherwise

// GOAL : Meta programming : Let's work around condition

// SOLUTION :

template<bool C, typename T, typename F>
struct my_conditional {

    using type = T;

};

template<typename T, typename F>
struct my_conditional<false, T, F> {

    using type = F;

};


template<typename T, typename U>
struct my_is_same { static constexpr bool value = false; };
template<typename T>
struct my_is_same<T, T> { static constexpr bool value = true; };

int main()
{
    using type_1 = my_conditional<true, char, const short>::type;
    using type_2 = my_conditional<false, long, unsigned int>::type;

    static_assert(my_is_same<type_1, char>::value);
    static_assert(my_is_same<type_2, unsigned int>::value);

    enum Letter { A, B, C, D, };

    using type_C = my_conditional<C <= (1 << sizeof(int8_t)), int8_t, int>::type;
    using type_D = my_conditional<D <= (1 << sizeof(int8_t)), int8_t, int>::type;

    std::cout << sizeof(Letter) << std::endl;
    std::cout << sizeof(type_C) << std::endl;
    std::cout << sizeof(type_D) << std::endl;

    type_C a_C = A; // a_C is store on 8 bits
    type_D a_D = A; // a_D is store on 32 bits

    return 0;
}

// Congratulation, you implemented an 'if / else' in template programming
// Feel free to implement an 'if / else if / else', or even a 'switch'
