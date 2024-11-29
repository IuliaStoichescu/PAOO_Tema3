#ifndef DATA_HPP
#define DATA_HPP

#include <string>

class Data {
private:
    int* data;              // Dynamically allocated integer
    std::string metadata;   // Additional descriptive data
    int* extraValues;       // Dynamically allocated array
    int extraSize;          // Size of the extraValues array

public:
    // Constructor
    Data(int value, const std::string& meta = "", int size = 0);

    // Copy constructor
    Data(const Data& other);

    // Copy assignment operator
    Data& operator=(const Data& other);

    // Destructor
    ~Data();

    // Swap function (for copy-and-swap idiom)
    void swap(Data& other) noexcept;

    // Getter for the value
    int getValue() const;

    // Getter for metadata
    const std::string& getMetadata() const;

    // Getter for extraValues
    int getExtraValue(int index) const;

    // Getter for extraSize
    int getExtraSize() const;
};

#endif // DATA_HPP
