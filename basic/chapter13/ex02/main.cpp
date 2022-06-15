#include <iostream>
#include "SumArray.hpp"
using namespace std;

int main()
{
    double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << sizeof(arr) << ' ' << sizeof(double) << std::endl;
    double sum = SumArray(arr, sizeof(arr) / sizeof(double));
    std::cout << sum;
}