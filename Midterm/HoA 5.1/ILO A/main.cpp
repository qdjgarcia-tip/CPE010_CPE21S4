#include <iostream>
#include <queue>
#include <string>

void display(std::queue<std::string>queue){

    std::queue<std::string> c = queue;

    while (!c.empty()){
        std::cout << " " << c.front();
        c.pop();
    }

    std::cout<<"\n";

}

int main(){

    std::queue<std::string> students;

    students.push("Dennis");
    students.push("James");

    std::cout << "The queue students is: ";
    display(students);

    std::cout << "students.empty() : " << students.empty() << "\n";
    std::cout << "students.size() : " << students.size() << "\n";
    std::cout << "students.front() : " << students.front() << "\n";
    std::cout << "students.back() : " << students.back() << "\n";

    std::cout << "After students.pop(): ";
    students.pop();
    display(students);

    students.push("Garcia");

    std::cout << "The queue students is: ";
    display(students);

    return 0;

}