#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include<iostream>
#include<string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator=(const WrongCat& obj);
        void makeSound()const;

};



#endif