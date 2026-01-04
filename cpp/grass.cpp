// grass.cpp
#include "metaclass.hpp"
#include <iostream>

class Grass : public Metaclass {
public:
    void displayAttributes() const override {
        std::cout << "Grass Attributes:\n"
                  << "Height: 10cm\n"
                  << "Color: Green\n"
                  << "Density: Medium\n"
                  << "Growth Condition: Humid\n"
                  << "Interaction: Can be trampled or cut\n";
    }
};
