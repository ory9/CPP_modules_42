#include "Fixed.hpp"

const int    Fixed::frac_bits = 8;

Fixed::Fixed(): _value(0){}

Fixed::Fixed(const Fixed &obj): _value(0){
     *this = obj;
}

Fixed::Fixed(const float num): _value(num){
     this->_value = roundf(num * (1 << frac_bits));
}

Fixed::Fixed(const int num): _value(0){
     this->_value = (num << frac_bits); 
}

int     Fixed::getRawBits() const{
     return this->_value;
}

void    Fixed::setRawBits(int const raw){
     this->_value = raw;
}

Fixed &Fixed::operator = (Fixed const& src)
{
    if (this != &src)
        this->_value = src.getRawBits();
    return *this;
}

float Fixed::toFloat( void ) const{
     return (float)(this->_value) / (float)(1 << frac_bits);
}

int     Fixed::toInt( void ) const{
     return (int)this->_value >> frac_bits;
}

std::ostream&   operator<<(std::ostream& outPut, const Fixed &obj1){
     return outPut << obj1.toFloat();
}

Fixed Fixed::operator + (const Fixed& item) const{
    return  Fixed(this->toFloat() + item.toFloat());
}

Fixed Fixed::operator - (const Fixed& item) const{
    return  Fixed(this->toFloat() - item.toFloat());
}

Fixed Fixed::operator * (const Fixed& item) const{
    return  Fixed(this->toFloat() * item.toFloat());
}

Fixed Fixed::operator / (const Fixed& item) const{
    return  Fixed(this->toFloat() / item.toFloat());
}

int    Fixed::operator < (const Fixed& item) const{
    if (this->getRawBits() < item.getRawBits())
        return 1;
    return 0;
}

int    Fixed::operator <= (const Fixed& item) const{
    if (this->getRawBits() <= item.getRawBits())
        return 1;
    return 0;
}

int    Fixed::operator == (const Fixed& item) const{
    if (this->getRawBits() == item.getRawBits())
        return 1;
    return 0;
}

int    Fixed::operator != (const Fixed& item) const{
    if (this->getRawBits() != item.getRawBits())
        return 1;
    return 0;
}

int    Fixed::operator > (const Fixed& item) const{
    if (this->getRawBits() > item.getRawBits())
        return 1;
    return 0;
}

int    Fixed::operator >= (const Fixed& item) const{
    if (this->getRawBits() >= item.getRawBits())
        return 1;
    return 0;
}

Fixed &Fixed::operator ++(){
    this->_value++;
    return *this;
}

Fixed Fixed::operator ++(int){
    Fixed cur(*this);

    operator ++ ();
    return cur;
}

Fixed &Fixed::operator --(){
    this->_value++;
    return *this;
}

Fixed Fixed::operator --(int){
    Fixed  varDec(*this);
    operator -- ();
    return varDec;
}

Fixed& Fixed::min(Fixed& a, Fixed& b){
    if (a < b)
        return a;
    return b;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b){
    if (a < b)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b){
    if (a > b)
        return a;
    return b;
}
const  Fixed& Fixed::max(const Fixed& a, const Fixed& b){
    if (a > b)
        return a;
    return b;
}

Fixed::~Fixed() {}
