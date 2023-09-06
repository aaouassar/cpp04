#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
   Animal* ptr[4];
   for(int i = 0; i < 4; i++)
   {
        if (i < 4 / 2)
            ptr[i] = new Dog();
        else
            ptr[i] = new Cat();
   }
   for(int i = 0; i < 4; i++)
        delete ptr[i];
}