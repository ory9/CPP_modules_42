#include "Fixed.hpp"

const int    Fixed::frac_bits = 8;

Fixed::Fixed(): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj): _value(0)
{
    std::cout << "Copy constructor called" <<std::endl;
    *this = obj;
}

Fixed::Fixed(const float num): _value(num)
{
    std::cout << "Float constructor called" <<std::endl;
    this->_value = roundf(num * (1 << frac_bits));
}

Fixed::Fixed(const int num): _value(0)
{
    std::cout << "Int constructor called" <<std::endl;
    this->_value = (num << frac_bits);
}

int     Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed &Fixed::operator = (Fixed const& src)
{
    if (this != &src)
        this->_value = src.getRawBits();
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

float Fixed::toFloat( void ) const
{
    return (float)(this->_value) / (float)(1 << frac_bits); 
}

int     Fixed::toInt( void ) const
{
    return (int)this->_value >> frac_bits;
}

std::ostream&   operator<<(std::ostream& outPut, const Fixed &obj1)
{
    outPut << obj1.toFloat();
    return outPut;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}