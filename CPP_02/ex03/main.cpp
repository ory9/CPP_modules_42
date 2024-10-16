#include "Point.hpp"

int main( void ) {

Point a(33.44, 20.2f);
Point b(15.2f, 1.2f);
Point c(11.2f, 10.2f);
Point point(4.2f, 6.2f);

if ((bsp( a, b, c, point)) == true)
    std::cout << "True" <<std::endl;
else if ((bsp( a, b, c, point)) == false)
    std::cout << "False" <<std::endl;
else
    std::cout << "Error: Unexpected occurred !" << std::endl;
return 0;
}

// int main(void) {
//     Point a(1.0f, 1.0f);
//     Point b(5.0f, 1.0f);
//     Point c(3.0f, 4.0f);

//     Point point(3.0f, 2.0f);

//     if (bsp(a, b, c, point) == true)
//         std::cout << "True" << std::endl;
//     else if (bsp(a, b, c, point) == false)
//         std::cout << "False" << std::endl;
//     else
//         std::cout << "Error: Unexpected occurred!" << std::endl;

//     return 0;
// }

