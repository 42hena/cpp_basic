#include "iter.hpp"

int main(void)
{
    std::string s[] = {"1996", "11", "08", "hena"};
    int i[] = {0, 1, 2, 3, 4, 5};
    float f[] = {0.0f, 1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f};
    double d[] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};

    std::cout << "String Iteration\t: ";
    iter(s, sizeof(s) / sizeof(*s), print);
    std::cout << std::endl;
    std::cout << "Int Iteration\t\t: ";
    iter(i, sizeof(i) / sizeof(*i), print);
    std::cout << std::endl;
    std::cout << "Float Iteration\t\t: ";
    iter(f, sizeof(f) / sizeof(*f), print);
    std::cout << std::endl;
    std::cout << "Double Iteration\t: ";
    iter(d, sizeof(d) / sizeof(*d), print);
    std::cout << std::endl;
    std::cout << "Char Iteration\t\t: ";
    iter(c, sizeof(c) / sizeof(*c), print);
    std::cout << std::endl;
    return 0;
}