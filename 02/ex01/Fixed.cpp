#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
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
    std::cout << "Copy constructor called" << std::endl;
    n = f.n;
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return (out);
}

void Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    n = f.n;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    float z = n / pow(2, val);
    return (z);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
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
