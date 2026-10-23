#include <iostream>
#include <string>
#include "printerArr.h"

#define maxSize 99

int main(){

    Printer printer(maxSize);
    Job tail; // temporary variable that stores data for job
    int option;

    do{
        std::cout << "PRINTER\n";
        std::cout << "1. Add Job\n";
        std::cout << "2. Process Jobs\n";
        std::cout << "3. Remove a Job\n";
        std::cout << "4. Show Current Jobs\n";
        std::cout << "5. Clear Jobs\n";
        std::cout << "6. Exit\n";
        std::cout << std::endl;
        std::cout << " Select Option: ";
        std::cin >> option;
        std::cout << std::endl;

        switch (option){
        case 1:
            std::cout << "Job ID:";
            std::cin >> tail.ID;
            std::cout << "Username: ";
            std::cin >> tail.username;
            std::cout << "Pages: ";
            std::cin >> tail.pages;
            std::cout << std::endl;
            printer.addJob(tail);
            break;

        case 2:
            printer.processJob();
            break;

        case 3:
            tail = printer.removeJob();
            break;

        case 4:
            printer.displayJob();
            break;

        case 5:
            printer.Clear();
            std::cout << "All print jobs cleared";
            std::cout << std::endl;
            break;

        case 6:
            std::cout << "Exited.";
            std::cout << std::endl;
            break;

        default:
            std::cout << "Invalid Option\n";
            std::cout << std::endl;
            break;
        }
    } while (option != 6);

    return 0;
}
