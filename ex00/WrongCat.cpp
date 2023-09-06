#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Wrongcat constractor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Wrongcat desrtactor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal(obj)
{
    std::cout << "wrongcat copy constractor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "wrongcat copy assignemnet constractor called" << std::endl;
    this->type = obj.get_type();
    return(*this);
}

void WrongCat::makeSound()const{
    std::cout << "Wrongcat make sound meew" << std::endl;
}
