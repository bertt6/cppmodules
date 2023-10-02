#include "Brain.hpp"

Brain::Brain() {
    cout << "Brain constructor called" << endl;
}

Brain::Brain(const Brain &cpy) {
    *this = cpy;
}

Brain::~Brain() {
    cout << "Brain destructor called" << endl;
}

Brain &Brain::operator=(const Brain &assing) {
    if(this != &assing){
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = assing.ideas[i];
        }
    }
    return *this;
}
