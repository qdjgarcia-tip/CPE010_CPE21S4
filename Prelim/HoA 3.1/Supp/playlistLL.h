#ifndef PLAYLIST_LL_H
#define PLAYLIST_LL_H

#include <iostream>
#include <string>

template <typename T>
class Playlist{

public:
    T songdata;
    T artistdata;
    Playlist<T> *next = nullptr;
    Playlist<T> *prev = nullptr;
};


template <typename T>
Playlist<T> *createNode(T newSongData, T newArtistData){
    Playlist<T> *newNode = new Playlist<T>;
    newNode->songdata = newSongData;
    newNode->artistdata = newArtistData;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    return newNode;
}


template <typename T>
void addSong(Playlist<T> **head, T newSongData, T newArtistData){
    Playlist<T> *newNode = createNode(newSongData, newArtistData);


    if (*head == nullptr){
        *head = newNode;
        newNode->next = newNode; 
        newNode->prev = newNode;
    }else{   
        Playlist<T> *tail = (*head)->prev; 
        tail->next = newNode;    
        newNode->prev = tail;   
        newNode->next = *head;   
        (*head)->prev = newNode; 
    }
}

template <typename T>
void removeSong(Playlist<T> **head, T songTitle, T artistName, Playlist<T> **currentSong){
    if (*head == nullptr){
        std::cout << "No songs in the playlist.\n" << std::endl;
        return;
    }

    Playlist<T> *current = *head;

    do{
        if (current->songdata == songTitle && current->artistdata == artistName){
            
            if (*currentSong != nullptr && *currentSong == current){
                if ((*currentSong)->next == *currentSong){
                    *currentSong = nullptr; 
                }
                else{
                    *currentSong = (*currentSong)->next; 
                }
            }

           
            if (current->next == current){
                *head = nullptr;
            }
            
            else{
                current->prev->next = current->next;
                current->next->prev = current->prev;

                
                if (current == *head){
                    *head = current->next;
                }
            }

            delete current;
            std::cout << "Removed: \n" << songTitle + " - " + artistName << std::endl;
            return;
        }
        current = current->next;
    }while (current != *head);

    std::cout << "Song not found: \n";
}

template <typename T>
void nextSong(Playlist<T> **current){
    if (*current != nullptr){
        *current = (*current)->next;
        std::cout << "Moved to next song: \n" << (*current)->songdata + " - " + (*current)->artistdata << std::endl << std::endl;
    }else{
        std::cout << "Playlist is empty!\n" << std::endl;
    }
}

template <typename T>
void prevSong(Playlist<T> **current){
    if (*current != nullptr){
        *current = (*current)->prev;
        std::cout << "Moved to previous song: \n" << (*current)->songdata + " - " + (*current)->artistdata << std::endl << std::endl;
    }else{
        std::cout << "Playlist is empty!\n" << std::endl;
    }
}

template <typename T>
void displayPlaylist(Playlist<T> *head){
    if (head == nullptr){
        std::cout << "No songs in the playlist.\n" << std::endl;
        return;
    }
    Playlist<T> *current = head;
    std::cout << "<=== Songs in Line ===> \n" << std::endl;
    do{
        std::cout << ">> " << current->songdata + " - " + current->artistdata << std::endl << std::endl;
        current = current->next;
    }while (current != head);
}

#endif