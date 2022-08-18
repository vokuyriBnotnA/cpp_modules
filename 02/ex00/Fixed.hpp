#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {

    int n;
    static const int val = 8;

    public:

    Fixed();
    ~Fixed();
    Fixed(const Fixed &f);
    void operator=(const Fixed &f);
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif