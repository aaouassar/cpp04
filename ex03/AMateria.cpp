#include "AMateria.hpp"

AMateria::AMateria()
{
    this->type = "Default";
    std::cout << "Default constractor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "destractor called" << std::endl;
}

AMateria::AMateria(std::string &type)
{
    std::cout << "constractor parametraise called" << std::endl;
    this->type = type;
}

AMateria::AMateria(const AMateria& obj)
{
    std::cout << "copy constractor called" << std::endl;
    *this = obj;
}

AMateria::AMateria& operator=(const AMateria& obj)
{
    std::cout << "copy assignement constractor called" << std::endl;
    this->type = obj.getType();
    return(*this);
}

std::string const & AMateria::getType() const{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}
