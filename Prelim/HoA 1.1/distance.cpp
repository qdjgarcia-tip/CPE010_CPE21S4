//GARCIA, DENNIS JAMES T.
#include <iostream>
#include <cmath> // for sqrt and pow

//Create a C++ program that has a function that will calculate the distance between two points.
int coordinateX (int x1, int x2);
int coordinateY (int y1, int y2);

int main(){

    int X = coordinateX(1,4);
    int Y = coordinateY(2,6);
    int distance = sqrt(X + Y);

    std::cout << "The coordinates are: " << std::endl;
    std::cout << "Coordinate X: "<< X << std::endl;
    std::cout << "Coordinate Y: "<< Y << std::endl;
    std::cout << "The distance is: " << distance;

}
//define
int coordinateX (int x1, int x2){
    int x3 =  x2 - x1;
    return std::pow(x3, 2);
}
int coordinateY (int y1, int y2){
    int y3 = y2 - y1;
    return std::pow(y3, 2);
}