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
    ~Fixed();

    void operator=(const Fixed &f);

    bool operator>(const Fixed &f);
    bool operator<(const Fixed &f);
    bool operator>=(const Fixed &f);
    bool operator<=(const Fixed &f);
    bool operator!=(const Fixed &f);
    bool operator==(const Fixed &f);

    Fixed operator+(const Fixed &f);
    Fixed operator-(const Fixed &f);
    Fixed operator*(const Fixed &f);
    Fixed operator/(const Fixed &f);

    Fixed operator++();
    Fixed operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed min(Fixed &f1, Fixed &f2);
    static Fixed max(Fixed &f1, Fixed &f2);
    static Fixed min(const Fixed &f1, const Fixed &f2);
    static Fixed max(const Fixed &f1, const Fixed &f2);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif