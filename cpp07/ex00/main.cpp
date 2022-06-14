#include <iostream>

#include "whatever.hpp"

int main()
{
    std::cout << "char Test" << std::endl;
    char ch1 = 'a', ch2 = 'z';
    print_value(ch1, ch2);

    std::cout << std::endl << std::endl;

    std::cout << "int Test" << std::endl;
    int i1 = 4, i2 = 2;
    print_value(i1, i2);

    std::cout << std::endl << std::endl;

    std::cout << "float Test" << std::endl;
    float f1 = 4.1f, f2 = 2.2f;
    print_value(f1, f2);

    std::cout << std::endl << std::endl;


    std::cout << "double Test" << std::endl;
    double d1 = 4.1, d2 = 2.2;
    print_value(d1, d2);

    std::cout << std::endl << std::endl;

    std::cout << "string Test" << std::endl;
    std::string s1 = "hello 42seoul", s2 = "see you again";
    print_value(s1, s2);

    std::cout << std::endl << std::endl;
}
