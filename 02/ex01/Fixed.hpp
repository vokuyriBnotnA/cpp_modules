#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    
    int n;
    static const int val = 8;

    public:

    Fixed();
    Fixed(int value);
    Fixed(float value);
    Fixed(const Fixed&);
    void operator=(const Fixed &f);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif