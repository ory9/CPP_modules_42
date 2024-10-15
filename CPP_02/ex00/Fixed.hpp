#pragma once
#include <iostream>

class   Fixed
{
private:
    int                 _value;
    static const int    frac_bits;
public:
    Fixed();
    Fixed(const Fixed &Data);
    Fixed &operator = (Fixed const& src);
    int getRawBits( void ) const;
    void setRawBits(const Fixed raw );
    ~Fixed();
};