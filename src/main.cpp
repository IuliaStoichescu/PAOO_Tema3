#include <iostream>
#include "../inc/Data.hpp"

int main() {
    Data d1(30, "First Data", 3);
    Data d2(56, "Second Data", 2);
    Data d3(90, "Third Data", 5);

    d1 = d2 = d3;

    std::cout << std::endl;
    std::cout << "For Item 10" << std::endl;
    std::cout << std::endl;
    std::cout << "d1 value: " << d1.getValue() << ", metadata: " << d1.getMetadata() << std::endl;
    std::cout << "d2 value: " << d2.getValue() << ", metadata: " << d2.getMetadata() << std::endl;
    std::cout << "d3 value: " << d3.getValue() << ", metadata: " << d3.getMetadata() << std::endl;

    Data d4(1, "Self Assignment Test", 4);
    Data d5(2, "Copy Assignment Test", 2);

    d5 = d4; 
    d4 = d4; 

    std::cout << std::endl;
    std::cout << "For Item 11" << std::endl;
    std::cout << std::endl;
    std::cout << "d4 value: " << d4.getValue() << ", metadata: " << d4.getMetadata() << std::endl;
    std::cout << "d5 value: " << d5.getValue() << ", metadata: " << d5.getMetadata() << std::endl;

    Data d6(42, "Original", 3);
    d6 = Data(100, "Temporary Data", 4);

    std::cout << std::endl;
    std::cout << "For Item 12" << std::endl;
    std::cout << std::endl;
    std::cout << "d6 value: " << d6.getValue() << ", metadata: " << d6.getMetadata() << std::endl;
    for (int i = 0; i < d6.getExtraSize(); ++i) 
    {
        std::cout << "d6 extraValues[" << i << "] = " << d6.getExtraValue(i) << std::endl;
    }

    return 0;
}
