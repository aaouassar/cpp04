#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "constractor Cat called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "destractor Cat called" <<std::endl;
}

Cat::Cat(const Cat& obj) : Animal(obj)
{
    std::cout << "copy constractor cat called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "copy assignement constractor cat called" << std::endl;
    this->type = obj.get_type();
    return(*this);
}

void Cat::makeSound()const{

    std::cout << "Cat make sound meew" << std::endl;
}