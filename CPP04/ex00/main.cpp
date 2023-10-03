#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"

int main()
{
    WrongAnimal a;
    WrongAnimal *b = new WrongCat();

    a.makeSound();
    b->makeSound();

    delete b;
}