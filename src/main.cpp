#include <iostream>
#include "../inc/Data.hpp"

using namespace std;

int main(void)
{
    Data d1(30);
    Data d2(56);
    Data d3(90);

    d1=d2=d3;

    std::cout << "obj1 value: " << d1.getValue() << std::endl;
    std::cout << "obj2 value: " << d2.getValue() << std::endl;
    std::cout << "obj3 value: " << d3.getValue() << std::endl;
    return 0;
}