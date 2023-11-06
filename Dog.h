#pragma once
#include "Animal.h" 
#include <iostream>

class Dog : public Animal {
public:
    void makeSound() const override;
};

