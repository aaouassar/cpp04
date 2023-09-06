#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>
#include<string>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator=(const WrongAnimal& obj);
        void makeSound() const;
        std::string get_type()const;
        void set_type(std:: string t);

};

#endif