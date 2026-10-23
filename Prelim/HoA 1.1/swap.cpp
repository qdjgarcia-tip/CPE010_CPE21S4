// GARCIA, DENNIS JAMES T.
#include <iostream>

int main(){

    int x = 6;
    int y = 7;

    x = x ^ y; 
    y = x ^ y;
    x = x ^ y;

    std::cout << "Variable X is swapped with: " << x << std::endl << "Variable Y is swapped with: " << y << std::endl;
}