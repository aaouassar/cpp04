#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    //const Animal* j = new Dog();
    const WrongAnimal* i = new  WrongCat();
    //std::cout << j->get_type() << " " << std::endl;
    std::cout << i->get_type() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    //j->makeSound();
    meta->makeSound();

    return 0;
}