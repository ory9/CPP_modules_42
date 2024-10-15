#pragma once
#include <iostream>
#include <cmath>

class   Fixed
{
private:
    float                _value;
    static const int    frac_bits;
public:
    Fixed();
    Fixed(const float num);
    Fixed(const int num);
    Fixed(const Fixed& obj);
    Fixed &operator = (const Fixed& src);
    ~Fixed();
    int     toInt( void ) const;
    float   toFloat( void ) const;
    int     getRawBits() const;
    void    setRawBits(int const raw);
    Fixed   operator + (const Fixed& item) const;
    Fixed   operator - (const Fixed& item) const;
    Fixed   operator / (const Fixed& item) const;
    Fixed   operator * (const Fixed& item ) const;
    int     operator < (const Fixed& item) const;
    int     operator <= (const Fixed& item) const;
    int     operator == (const Fixed& item) const;
    int     operator != (const Fixed& item) const;
    int     operator > (const Fixed& item) const;
    int     operator >= (const Fixed& item) const;
    Fixed&  operator ++ ();
    Fixed   operator ++ (int);
    Fixed&  operator -- ();
    Fixed   operator -- (int);
    static          Fixed& min(Fixed& a, Fixed& b);
    static const    Fixed& min(Fixed const& a, Fixed const& b);
    static          Fixed& max(Fixed& a, Fixed& b);
    static const    Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream&   operator << (std::ostream& a, const Fixed &obj1);