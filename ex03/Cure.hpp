#ifndef CURE_HPP
#define CURE_HPP

#include<iostream>
#include<string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure& obj);
        Cure& operator=(const Cure& obj);
        std::string const & getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);

};

#endif