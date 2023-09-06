#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong animal constractor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong animal destractor called" << std::endl;
}

WrongAnimal::WrongAnimal(const  WrongAnimal& obj)
{
    std::cout << "wrong animal copy constractor called" << std::endl;
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj)
{
    std::cout << "wrong animal copy assignement constractor called" << std::endl;
    this->type = obj.get_type();
    return(*this);
}

std::string WrongAnimal::get_type() const{
    return type;
}

void    WrongAnimal::set_type(std:: string t)
{
    this->type = t;
}

void WrongAnimal::makeSound() const{
    std::cout << "wrong animal make sound" << std::endl;
}