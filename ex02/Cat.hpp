#ifndef CAT_HPP
#define CAT_HPP

#include<iostream>
#include<string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain;
    protected:
        std::string type;

    public:
        Cat();
        ~Cat();
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        void makeSound()const;

};



#endif
