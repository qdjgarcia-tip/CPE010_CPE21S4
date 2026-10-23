//GARCIA, DENNIS JAMES T.
#include <iostream>
#include <cmath>

class Triangle{
    private:
        double totalAngle, angleA, angleB, angleC;
    public:
    //constructore
    Triangle(double A, double B, double C);
    void setAngle(double A, double B, double C);
    void validateAngle();
    const bool validateTriangle();
};
  
    //void functions outside of class
        double sideA = 19.7;
        double sideB = 10;
        double sideC = 15.3;

       void perimeter() {
   
           double p = sideA+sideB+sideC;
           std::cout << p;
           
       }
       void semi_perimeter() {
           
           double sp = (sideA+sideB+sideC) / 2;
          std::cout << sp;
           
       }
       void area() {
           
           double sp = (sideA+sideB+sideC) / 2;
           double a = sqrt(sp*(sp-sideA)*(sp-sideB)*(sp-sideC));
           std::cout << a;
          
       }
    

int main(){
    
    std::cout<<"Perimeter: ";
    perimeter();
    std::cout<<std::endl;
    std::cout<<"Semi-Perimeter: ";
    semi_perimeter();
    std::cout<<std::endl;
    std::cout<<"Area: ";
    area();
    std::cout<<std::endl<<std::endl;
    
    
    Triangle setl(100,30,50);
    if(setl.validateTriangle()){
        std::cout<<"The triangle is valid."<<std::endl;
    }else{
        std::cout<<"The triangle is not valid."<<std::endl;
    }
    std::cout<<"The triangle is ";
    setl.validateAngle();
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

void Triangle::validateAngle(){
    if(angleA == 90 && angleB == 90 && angleC == 90){
        std::cout<<"Right-angled.";
    }else if(angleA >= 90 && angleB >= 90 && angleC >= 90){
        std::cout<<"Obtuse-angled.";
    }else if(angleA <= 180 && angleB <= 180 && angleC <= 180){
        std::cout<<"Obtuse-angled.";
    }else if(angleA < 90 && angleB < 90 && angleC < 90){
        std::cout<<"Acute-angled.";
    }else{
        std::cout<<"Others.";
    }
}

const bool Triangle::validateTriangle(){
    return (totalAngle <= 180);

}
