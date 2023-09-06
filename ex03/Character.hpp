#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include<iostream>
#include<string>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string Name;

    public:
        Character();
        ~Character();
        Character(const Character& obj);
        Character& operator=(const Character& obj);
        ~ICharacter();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

};
