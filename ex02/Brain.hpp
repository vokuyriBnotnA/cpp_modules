#ifndef BREAIN_HPP
#define BREAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:

    std::string ideas[100];

    Brain();
    Brain(const Brain &f);
    Brain &operator=(const Brain &f);
    ~Brain();
};

#endif