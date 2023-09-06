#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(const Ice& obj);
        Ice& operator=(const Ice& obj);
        std::string const & getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);


};



#endif