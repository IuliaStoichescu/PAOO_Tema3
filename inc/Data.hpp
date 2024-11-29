#ifndef DATA_HPP
#define DATA_HPP

class Data
{
    private:
        int *data;
    
    public:
        //Getter
        int getValue()const; 
        //Constructor
        Data(int value);
        // Copy constructor
        Data(const Data& other);
        // Copy assignment operator
        Data& operator=(const Data& other);
        // Destructor
        ~Data();
        //swap function
        void swap(Data& other) noexcept;

};

#endif