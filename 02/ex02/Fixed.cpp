#include "Fixed.hpp"

Fixed::Fixed()
{
    this->n = 0;
}

Fixed::Fixed(int value)
{
    n = value << val;
}

Fixed::Fixed(float value)
{
    value *= pow(2, val);
    value = std::roundf(value);
    n = (int) value;
}

Fixed::Fixed(const Fixed& f)
{
    n = f.n;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return (out);
}

void Fixed::operator=(const Fixed &f)
{
    n = f.n;
}

bool Fixed::operator>(const Fixed &f)
{
    if (n > f.n)
        return true;
    return false;
}
bool Fixed::operator<(const Fixed &f) 
{
    if (n < f.n)
        return true;
    return false;
}
bool Fixed::operator>=(const Fixed &f)
{
    if (n >= f.n)
        return true;
    return false;
}
bool Fixed::operator<=(const Fixed &f)
{
    if (n <= f.n)
        return true;
    return false;
}
bool Fixed::operator!=(const Fixed &f)
{
    if (n != f.n)
        return true;
    return false;
}
bool Fixed::operator==(const Fixed &f)
{
    if (n == f.n)
        return true;
    return false;
}

Fixed Fixed::operator+(const Fixed &f)
{
    Fixed res;
    int a, b;

    a = n;
    b = f.n;
    a += b;
    float c = a / pow(2, val);
    res = c;
    return res;
}
Fixed Fixed::operator-(const Fixed &f)
{
    Fixed res;
    int a, b;

    a = n;
    b = f.n;
    a -= b;
    float c = a / pow(2, val);
    res = c;
    return res;
}
Fixed Fixed::operator*(const Fixed &f)
{
    Fixed res;
    int a, b;

    a = n;
    b = f.n;
    float a1 = a / pow(2, val);
    float b1 = b / pow(2, val);
    a1 *= b1;
    res = a1;
    return res;
}
Fixed Fixed::operator/(const Fixed &f)
{
    Fixed res;
    int a, b;

    a = n;
    b = f.n;
    float a1 = a / pow(2, val);
    float b1 = b / pow(2, val);
    a1 /= b1;
    res = a1;
    return res;
}
Fixed Fixed::operator++()
{
    n += 1;
    return *this;   
}
Fixed Fixed::operator--()
{
    n -= 1;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed res;
    res.n = n;
    n += 1;
    return res;
}
Fixed Fixed::operator--(int)
{
    Fixed res;
    res.n = n;
    n -= 1;
    return res;
}

Fixed Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 < f2)
        return f1;
    return f2;
}
Fixed Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 > f2)
        return f1;
    return f2;
}
Fixed Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if (f1.n < f2.n)
        return f1;
    return f2;
}
Fixed Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if (f1.n > f2.n)
        return f1;
    return f2;
}

Fixed::~Fixed()
{

}

int Fixed::getRawBits(void) const
{
    float z = n / pow(2, val);
    return (z);
}

void Fixed::setRawBits(int const raw)
{
    this->n = raw << this->val;
}

float Fixed::toFloat(void) const
{
    float z = n / pow(2, val);
    return (z);
}

int Fixed::toInt(void) const
{
    return n >> val;
}
