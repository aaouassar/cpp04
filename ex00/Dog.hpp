#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include<string>
#include "Animal.hpp"

class Dog : public Animal
{
    protected:
        std::string type;

    public:
        Dog();
        ~Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        void makeSound()const;

};



#endif