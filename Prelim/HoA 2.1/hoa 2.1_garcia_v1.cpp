#include <iostream>
#include <string>

class Student{
  private:
  std::string studentName;
  int studentAge;

public:
//constructor
    Student(std::string newName = "John Doe", int newAge = 18){
        studentName = std::move(newName);
        studentAge = newAge;
        std::cout <<"Constructor was called"<<std::endl;
    }
//destructor
    ~Student(){
    std::cout << "Destructor was called" << std::endl;
    }
//copy constructor
    Student(const Student &copyStudent){
        std::cout<<"Copy Constructor Called"<< std::endl;
        studentName = copyStudent.studentName;
        studentAge = copyStudent.studentAge; 
    }
// copy assignment operator
    Student& operator=(const Student &copyStudent) {
        std::cout << "Copy Assignment Operator was Called" << std::endl;
    
        if (this == &copyStudent) {
            return *this; 
        }

        studentName = copyStudent.studentName;
        studentAge = copyStudent.studentAge;

        return *this;
}  

// display attributes
void printDetails(){
    std::cout << this->studentName << " " << this->studentAge << std::endl;
    }
};

int main() {
    Student student1("Dennis James", 19);
    Student student2(student1);
    Student student3;
    student3 = student2;

    return 0;

}