#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include<string>

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        ~AMateria();
        AMateria(const AMateria& obj);
        AMateria& operator=(const AMateria& obj);
        AMateria(std::string const & type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);


};

#endif