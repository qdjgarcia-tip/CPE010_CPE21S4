// GARCIA, DENNIS JAMES T.

#include <iostream>
#include <cmath>

//Create a C++ program that has a function 
//to convert temperature in Kelvin to Fahrenheit.
float kelvin (float x);
float fahren (float x);

    int main() {

        std::cout << "Kelvin & Fahrenheit Conversion" << std::endl << std::endl;
        {                                
            std::cout << "288° Kelvin to Fahrenheit: " << kelvin(288)<< "F°" << std::endl;
            std::cout << "59° Fahrenheit to Kelvin: " << fahren(59) << "K°" << std::endl;
        }
    }

//define
    float fahren(float x){
    return (x - 32.0) * 0.5 + 273.15;
    }

    float kelvin(float x){
    return (x - 273.15) * 1.8 + 32;
    }