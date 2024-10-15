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
    int             toInt( void ) const;
    float           toFloat( void ) const;
    int		        getRawBits() const;
    void	        setRawBits(int const raw);
};

std::ostream&   operator << (std::ostream& a, const Fixed &obj1);