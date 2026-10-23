//GARCIA, DENNIS JAMES T.
#include <iostream>

// Create a function that will take two number and display the sum
//prototyping:
int sumOfTwoNum(int fNum, int sNum);

// Create a function that will return whether variable A is greater than variable B.
bool compareOfTwoNum(int gNum, int dNum);

//Create a function that will take two Boolean values and display the result of all 
//logical operations then return true if it was a success.
bool logicOfTwoNum(int kNum, int hNum);

int main(){
    std::cout<<"The sum of the two numbers is: "<< sumOfTwoNum(123,456) <<std::endl << std::endl;
    std::cout<<"Variable A is greater than B: " << std::boolalpha << compareOfTwoNum(68,67) <<std::endl;
    std::cout<<"Variable B is greater than B: "<< std:: boolalpha << compareOfTwoNum(67,68) <<std::endl;
    std::cout<<"Variable A and B are both the same value: "<< std:: boolalpha << compareOfTwoNum(70,70) <<std::endl<<std::endl;
    std::cout<<"The Boolean Values are: "<< std:: endl << logicOfTwoNum(10,5) << std::endl;
}

//define
int sumOfTwoNum(int fNum, int sNum){
    return fNum + sNum;
}
bool compareOfTwoNum(int gNum, int dNum){
    return gNum >= dNum;
}
bool logicOfTwoNum(int kNum, int hNum){
   
    {
        std::cout <<"The Logical Operator AND result: " << std:: noboolalpha << (kNum < 2 &&  hNum < 4) << std::endl;
        std::cout <<"The Logical Operator OR result: " << std:: noboolalpha << (kNum < 2 ||  hNum < 4) << std::endl;
        std::cout <<"The Logical Operator NOT result: " << std:: noboolalpha << (!(kNum > 2 && hNum < 4)) << std::endl;
    }
   
   std::cout << std::endl << "Success?: " << std::boolalpha;
   return kNum < 2 &&  hNum < 4;
   return kNum < 2 ||  hNum < 4;
   return !(kNum > 2 && hNum < 4);
   
}