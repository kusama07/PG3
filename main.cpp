#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main() {
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    dog->makeSound(); // "ワンワン"と出力される
    cat->makeSound(); // "ニャー"と出力される

    delete dog;
    delete cat;

    return 0;
}