#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    std::cout << "Default constractor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "destractor called" << std::endl;
}

Ice::Ice(const Ice& obj)
{
    std::cout << "copy constractor called" << std::endl;
    *this = obj;
}

Ice& Ice::operator=(const Ice& obj)
{
    std::cout << "copy assignement called" << std::endl;
    this->type = obj.getType();
    return(*this);
}

AMateria* Ice::clone() const{
    Ice* p = new Ice();
    return p;
}

void Ice::use(ICharacter& target)
{
    (void)target;
    std::cout << "shoots an ic bolt at " << std::endl;
}
