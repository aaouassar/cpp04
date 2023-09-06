#include "Cure.hpp"

Cure::Cure()
{
    this->type = "ice";
    std::cout << "Default constractor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "destractor called" << std::endl;
}

Cure::Cure(const Cure& obj)
{
    *this = obj;
    std::cout << "copy constractor called" << std::endl;
}

Cure& Cure::operator=(const Cure& obj)
{
    std::cout << "copy assignement called" << std::endl;
    this->type = obj.getType();
    return(*this);
}

AMateria* Cure::clone() const{
    Cure *a = new Cure();
    return a;

}

void Cure::use(ICharacter& target)
{
    (void)target;
    std::cout << " heals" << std::endl;
}
