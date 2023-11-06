#pragma once
#include "Animal.h" 
#include <iostream>

class Cat : public Animal {
public:
    void makeSound() const override;
};
