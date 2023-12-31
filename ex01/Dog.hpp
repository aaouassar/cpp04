#ifndef DOG_HPP
#define DOG_HPP

#include<iostream>
#include<string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain;
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