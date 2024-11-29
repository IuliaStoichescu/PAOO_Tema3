#include <iostream>
#include "../inc/Data.hpp"

using namespace std;

int main(void)
{
    Data d1(30);
    Data d2(56);
    Data d3(90);

    d1=d2=d3;

    std::cout << "For Item 10" << std::endl;
    std::cout << "obj1 value: " << d1.getValue() << std::endl;
    std::cout << "obj2 value: " << d2.getValue() << std::endl;
    std::cout << "obj3 value: " << d3.getValue() << std::endl;

    Data d4(1);
    Data d5(2);

    d5 = d4; // Copy assignment operator
    d4 = d4; // Self-assignment

    std::cout << "For Item 11" << std::endl;
    std::cout << "obj4 value: " << d4.getValue() << std::endl;
    std::cout << "obj5 value: " << d5.getValue() << std::endl;
    return 0;
}