// GARCIA, DENNIS JAMES T.
#include <iostream>
using namespace std;

int main (){
    float price1, price2, price3;
    int accept;
    int accept2;

do {
    cout << endl;
    cout << "Enter first item price: ";
    cin >> price1;

    cout << "Enter second item price: ";
    cin >> price2;

    cout << "Enter third item price: ";
    cin >> price3;

    float total = price1 + price2 + price3;

    cout << "Total: " << total << endl;
    
    cout << endl;
    
    cout << "Would you like to accept payment?"
            << endl << "1. Accept"
            << endl << "2. Decline" << endl
            << endl;
    cin >> accept;
    
    cout << endl;
    
    switch (accept) {
        case 1: {
        float bal;
        
        cout << "Input your Balance: " << endl;
        cin >> bal;
        
        float change = bal - total;
        
        cout << endl;
        
        if(change > 0){
        cout << "First item price: " << price1 << endl;
        cout << "Second item price: " << price2 << endl;
        cout << "Third item price: " << price3 << endl;
        cout << "Change: " << change;
        
        return 0;
        } else {
            cout << "Insufficient Balance. Try again";
        }
        
        break;
        }
        
        case 2: { 
        cout << "Would you like to recalculate prices?"
            << endl << "1. Yes"
            << endl << "2. No" << endl
            << endl;
        cin >> accept2;
        
            if(accept2 ==2){
                cout << endl << "Exit.";
            }
        break;
            }
        }
    } while(accept2 == 1);
}