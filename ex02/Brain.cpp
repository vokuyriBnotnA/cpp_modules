#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain construct" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destruct" << std::endl;
}

Brain::Brain(const Brain &f)
{
    *this = f;
}

Brain &Brain::operator=(const Brain &f)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = f.ideas[i];
    return *this;
}