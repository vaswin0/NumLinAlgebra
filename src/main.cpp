#include "Matrix.h"
#include <iostream>

int main(){

Matrix p(3,3);
//p.shape();

p.initMatrix();

//p.shape();
//std::cout << p.transpose() << std::endl;
//std::cout << p << std::endl;

std::cout << 3*p*p << std::endl;
std::cout <<  (3*p*p).swapRows(0,2) << std::endl;



return 0;
}

