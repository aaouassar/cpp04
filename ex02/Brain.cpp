#include "Brain.hpp"

// Brain& Brain::operator=(const Brain &obj)
// {
//     std::cout << "(Brain)  assignation operator called" << std::endl;
//     for (int i = 0; i < 100; i++)
//         this->ideas[i] = obj.ideas[i];
//     return *this;
// }
Brain::Brain()
{
    std::cout << "constractor Brain called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "destractor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
    std::cout << "copy constractor called" << std::endl;
    *this = obj;
}

Brain& Brain::operator=(const Brain& obj)
{
    std::cout << "copy assignement constractor called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
    return(*this);
}