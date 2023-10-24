
#include"Points.hpp"
int main() {
    Points A(0,0);
    Points B(1,1);
    Points C(0,2);
    Points P(0,1);
    //Points P(0.5f,1);
    //Points P(10,10); 

    if (A.bsp(A, B, C, P)) {
        std::cout << "Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Point is outside the triangle." << std::endl;
    }

    return 0;
}
