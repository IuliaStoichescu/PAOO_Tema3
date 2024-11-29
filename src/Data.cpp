#include "../inc/Data.hpp"
#include <iostream>

// Constructor
Data::Data(int value) : data(new int(value)) {
    std::cout << "Constructor called, value: " << *data << std::endl;
}

// Copy constructor
Data::Data(const Data& other) : data(new int(*(other.data))) {
    std::cout << "Copy constructor called, value: " << *data << std::endl;
}

// Copy assignment operator
Data& Data::operator=(const Data& other) {
    if (this != &other) { 
        Data temp(other);   // Create a temporary copy of `other`
        swap(temp);            // Swap the contents of `temp` with `this`
        std::cout << "Copy assignment operator called, value: " << *data << std::endl;
    }
    else{
        return *this;
    }


    return *this; // Return reference to the current object
    //This ensures that the result of an assignment operation is a reference to the left-hand side object.
}

// Destructor
Data::~Data() {
    std::cout << "Destructor called, deleting value: " << *data << std::endl;
    delete data;
}

// Getter for the value
int Data::getValue() const {
    return *data;
}
