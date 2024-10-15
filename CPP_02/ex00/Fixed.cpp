#include "Fixed.hpp"

const int    Fixed::frac_bits = 8;

Fixed::Fixed()
{
    _value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &Data)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = Data;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator = (Fixed const& src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = src.getRawBits();
    return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(const Fixed raw)
{
    this->_value = raw.getRawBits();
    std::cout << this->_value << std::endl;
}