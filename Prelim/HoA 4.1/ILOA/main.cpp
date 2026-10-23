#include <iostream>
#include <stack>


int main(){

    // create an object:
    std::stack<char> stack1;
    std::stack<char> stack2;
    
    // isEmpty
    std::cout<<"Is the stack empty?: "<< stack1.empty() << std::endl;
    // push
    stack1.push('D');
    std::cout<<"Current top of the stack: " << stack1.top()<<std::endl;
    stack1.push('E');
    std::cout<<"Current top of the stack: " << stack1.top()<<std::endl;
    stack1.push('N');
    // Top
    std::cout<<"Current top of the stack: " << stack1.top()<<std::endl;
    std::cout<<"Is the stack empty?: "<< stack1.empty() << std::endl;
    // isFull
    std::cout<<"Is the stack full?: "<< stack1.empty() << std::endl;
    std::cout<<"What is the size of the stack?: "<<stack1.size()<<std::endl;

    stack2.push('N');
    std::cout<<"Current top of the stack 2: " << stack2.top()<<std::endl;
    stack2.push('I');
    std::cout<<"Current top of the stack 2: " << stack2.top()<<std::endl;
    stack2.push('S');
    std::cout<<"Current top of the stack 2: " << stack2.top()<<std::endl;
    std::cout<<std::endl;

    //pop
    stack2.pop();
    stack2.pop();

    std::cout<<"Current top of the stack 2: "<<stack2.top()<<std::endl;
    std::cout<<"Current top of the stack 2: "<<stack2.top()<<std::endl;
    std::cout<<"Current top of the stack 2: "<<stack2.top()<<std::endl;

    std::cout<<std::endl;

    //emplace
    std::stack<int> stack3;
    stack3.emplace(1);
    stack3.emplace(2);

    
    std::cout << "The emplace stacks structure are: ";
    while (!stack3.empty()) {
        std::cout << stack3.top() << ", ";
        stack3.pop();
  }

    std::cout<<std::endl<<std::endl;
    
    //swap

    stack1.push('A');
    stack1.push('B');
    stack1.push('C');

    stack2.push('D');
    stack2.push('E');
    stack2.push('F');

    stack1.swap(stack2);

    std::cout<<"Current top of the stack 1: "<<stack1.top()<<std::endl;
    std::cout<<"Current top of the stack 2: "<<stack2.top()<<std::endl;

    return 0;
}

