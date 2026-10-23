#include <iostream>
#include <string>
#include "stackarray.h"
#include "stackll.h"

int main(){

// ARRAYS 

// since the expression is a line of text I had to use std::string.
std::string expr;

std::cout<<"Stack using Array\n"<<std::endl;

std::cout<<"Input an Expression: ";
std::cin >> expr;
std::cout<<std::endl;

    bool arrValid = true; //sets up the true and false for the else if conditions

    for (int i = 0; i < expr.length(); i++) { //.length a string function, size() works as well according to w3schools
        char newData = expr[i]; //loop that goes through the string and tries to make a char data type
    
    if(newData == '{' || newData ==  '(' || newData =='['){
        push(newData); //push only opening brackets.
        // nested else if statements or conditions only for closing brackets
    }else if(newData == '}' || newData ==  ')' || newData ==']'){
        if(isEmpty()){
           arrValid = false;
           break; /* the condition above is needed for break to work, 
                    a substitute for return 0 that keeps the code running */

        }else if(newData == ')' && Top() == '('){
            pop();
        }else if(newData == '}' && Top() == '{' ){
            pop();
        }else if(newData == ']' && Top() == '['){
            pop();
        }else{
           arrValid = false;
           break;
            }
        }
    }
    if(arrValid && isEmpty()){ //since the closing brackets gets popped if the stack/array is empty then its valid
        std::cout<<"Valid Expression";
    }else{
        std::cout<<"Invalid Expression";
    }

    std::cout<<std::endl<<std::endl;

    // LINKED LISTS

std::cout<< "Stack using Link Lists\n"<< std::endl;   

std::cout<<"Input an Expression: ";
std::cin >> expr;
std::cout<<std::endl;

    //similar code to array stack list, with modified function names since both header files clashed.

    bool llValid = true; 

    for (int i = 0; i < expr.length(); i++) {
        char newData = expr[i]; 
    
    if(newData == '{' || newData ==  '(' || newData =='['){
        llpush<char>(newData); /*all functions/methods are required to have a data type declared or allocated since
                                I used template functions in my stackll.h header file. "Template <typename T>" */

    }else if(newData == '}' || newData ==  ')' || newData ==']'){
        if(isEmptyll<char>()){
            llValid = false;
            break;
        }else if(newData == ')' && llTop<char>() == '('){
            llpop<char>();
        }else if(newData == '}' && llTop<char>() == '{' ){
            llpop<char>();
        }else if(newData == ']' && llTop<char>() == '['){
            llpop<char>();
        }else{
            llValid = false;
            break;
        }
        }
    }
    if(llValid && isEmptyll<char>()){
        std::cout<<"Valid Expression";
    }else{
        std::cout<<"Invalid Expression";
    }

    std::cout<<std::endl<<std::endl;

    return 0;
}