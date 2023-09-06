#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "constractor animal called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destractor animal called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    std::cout << "copy constractor animal called" << std::endl;
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    std::cout << "copy assignement constractor animal called" << std::endl;
    this->type = obj.get_type();
    return(*this);
}

void Animal::makeSound()const{
    std::cout << "Animal make sound" << std::endl;
}

std::string Animal::get_type()const{

    return this->type;
}

void Animal::set_type(std::string t)
{
    this->type = t;
}