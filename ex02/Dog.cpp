#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "constractor Dog called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "destractor Dog called" << std::endl;
    delete brain;
}

Dog::Dog(const Dog& obj) : Animal(obj)
{
    std::cout << "copy constractor dog called" << std::endl;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "copy assignement constractor dog called" << std::endl;
    this->type = obj.get_type();
    return(*this);
}

void Dog::makeSound()const{

    std::cout << "Dog make sound haw haw" << std::endl;
}