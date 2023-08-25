#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"


int main() {
    const Animal *a = new Animal();
    const Animal *d = new Dog();
    const Animal *c = new Cat();

    // Animal a;
    // Dog d;
    // Cat c;

    cout << "----------------" << endl;
    a->makeSound();
    d->makeSound();
    c->makeSound();
    cout << endl;
    cout << a->getType() << endl;
    cout << d->getType() << endl;
    cout << c->getType() << endl;




    cout << "----------------" << endl;
    delete a;
    delete d;
    delete c;
}