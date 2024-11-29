#include "../inc/Data.hpp"
#include <iostream>
#include <utility> // For std::swap

Data::Data(int value, const std::string& meta, int size)
    : data(new int(value)), metadata(meta), extraValues(size > 0 ? new int[size] : nullptr), extraSize(size) {
    for (int i = 0; i < size; ++i) {
        extraValues[i] = 0; // Initialize array with zeros
    }
    std::cout << "Constructor called, value: " << *data << ", metadata: " << metadata << std::endl;
}

Data::Data(const Data& other)
    : data(new int(*(other.data))), metadata(other.metadata), 
      extraValues(other.extraSize > 0 ? new int[other.extraSize] : nullptr), extraSize(other.extraSize) {
    for (int i = 0; i < extraSize; ++i) {
        extraValues[i] = other.extraValues[i];
    }
    std::cout << "Copy constructor called, value: " << *data << ", metadata: " << metadata << std::endl;
}

Data& Data::operator=(const Data& other) {
    if (this != &other) {
        Data temp(other);   // Create a temporary copy of `other`
        swap(temp);         // Swap the contents of `temp` with `this`
        std::cout << "Copy assignment operator called, value: " << *data << ", metadata: " << metadata << std::endl;
    }
    return *this;
}

void Data::swap(Data& other) noexcept {
    std::swap(data, other.data);
    std::swap(metadata, other.metadata);
    std::swap(extraValues, other.extraValues);
    std::swap(extraSize, other.extraSize);
}

Data::~Data() {
    std::cout << "Destructor called, deleting value: " << *data 
              << ", metadata: " << metadata << std::endl;
    delete data;
    delete[] extraValues;
}

int Data::getValue() const {
    return *data;
}

const std::string& Data::getMetadata() const {
    return metadata;
}

int Data::getExtraValue(int index) const {
    if (index >= 0 && index < extraSize) {
        return extraValues[index];
    }
    throw std::out_of_range("Index out of range");
}

int Data::getExtraSize() const {
    return extraSize;
}
