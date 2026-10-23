#include <iostream>

class Triangle{
    private:
        double totalAngle, angleA, angleB, angleC;
    public:
    //constructore
    Triangle(double A, double B, double C);
    void setAngle(double A, double B, double C);
    const bool validateTriangle();
};

int main(){
    Triangle setl(100,30,50);
    if(setl.validateTriangle()){
        std::cout<<"The triangle is valid."<<std::endl;
    }else{
        std::cout<<"The triangle is not valid."<<std::endl;
    }
}

Triangle::Triangle(double A, double B, double C){
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A+B+C;
}

void Triangle::setAngle(double A, double B, double C){
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A+B+C;
}
const bool Triangle::validateTriangle(){
    return (totalAngle <= 180);
}