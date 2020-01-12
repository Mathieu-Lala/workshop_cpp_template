/*
** EPITECH PROJECT, 2019
** workshop_cpp_template
** File description:
** 22_printf
*/

#include <iostream>

// EXERCISE : implement printf like function using template

// GOAL : Introduction to variadic template

// SOLUTION :

// this function take a format string, one argument,
// and a quantity undefined of argument

template<typename T, typename ...Args>
void my_printf(const char *format, T arg, Args &&...args)
{
    while (*format) {

        if (*format == '%') {
            if (*(format + 1) == '%')
                format++;
            else {
                std::cout << arg;
                return my_printf(format + 1, args...);
            }
        }

        std::cout << *format++;
    }
}

// and we make a specialization if there is no argument

void my_printf(const char *format)
{
    std::cout << format;
}

int main()
{
    my_printf("Hello %\n", "World");
    my_printf("1 % % % 5\n", 2, 3, 4);

    int bar;
    my_printf("% % % %\n", true, 3, "foo", &bar);

    return 0;
}
