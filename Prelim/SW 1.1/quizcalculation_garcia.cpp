// GARCIA, DENNIS JAMES T.
#include <iostream>
using namespace std;

int main (){
    float quiz1, quiz2, quiz3;

    quiz1 = 0;
    quiz2 = 0;
    quiz3 = 0;

    cout << "Enter first quiz grade: ";    
    cin >> quiz1;

    cout << "Enter second quiz grade: ";
    cin >> quiz2;

    cout << "Enter third quiz grade: ";
    cin >> quiz3;

    float total = quiz1 + quiz2 + quiz3;
    float avg = total / 3;
    
    cout << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << avg;
}
