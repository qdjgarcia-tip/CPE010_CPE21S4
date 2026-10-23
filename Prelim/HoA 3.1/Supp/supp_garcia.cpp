#include <iostream>
#include <string>
#include "playlistLL.h"

int main(){

    int choice = 0;

    Playlist<std::string> *head = nullptr;
    Playlist<std::string> *currentSong = nullptr;

    while (choice != 6){

        std::cout << "<=== Playlist ===> "<<std::endl<<std::endl;
        std::cout << "1. Add Song"<<std::endl;
        std::cout << "2. Remove Song"<<std::endl;
        std::cout << "3. Next Song"<<std::endl;
        std::cout << "4. Previous Song"<<std::endl;
        std::cout << "5. Display All Songs"<<std::endl;
        std::cout << "6. Exit"<<std::endl<<std::endl;
        std::cout << "<================> "<<std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore();
        std::cout<<std::endl;

        switch (choice){

        case 1:{

            std::string title;
            std::string artist;
            std::cout << "Enter song title: ";
            std::getline(std::cin, title);
            std::cout << "Enter song artist: ";
            std::getline(std::cin, artist);
            std::cout<<std::endl;

            addSong(&head, title, artist);

    
            if (currentSong == nullptr){
                currentSong = head;
            }
            break;
        }

        case 2:{

            std::string title;
            std::string artist;
            std::cout << "Enter song title to remove: ";
            std::getline(std::cin, title);
            std::cout << "Enter song artist to remove: ";
            std::getline(std::cin, artist);
            std::cout<<std::endl;

            removeSong(&head, title, artist, &currentSong);

            std::cout<<std::endl;

            break;
        }

        case 3:{
            nextSong(&currentSong);

            break;
        }
        case 4:{
            prevSong(&currentSong);

            break;
        }
        case 5:{
            displayPlaylist(head);

            break;
        }
        case 6:
            std::cout << "Exited.\n";

            break;

        default:
            std::cout << "Invalid option!\n";
        }
    }

    return 0;
}
