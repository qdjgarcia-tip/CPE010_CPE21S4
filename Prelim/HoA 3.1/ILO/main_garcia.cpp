#include <iostream>
#include "garcia_singly_ll.h"

int main(){

    //create nodes:
    SinglyList<char>* head = nullptr;
    SinglyList<char>* second = nullptr;
    SinglyList<char>* third = nullptr;

    //allocated memory to the head:
    head = new SinglyList<char>;
    second = new SinglyList<char>;
    third = new SinglyList<char>;

    //added data to the node
    head->data ='D';
    second->data = 'J';
    third->data = 'G';

    //assign the next to the node
    head->next = second;
    second->next = third;
    third->next = nullptr;

    std::cout<<"Testing the ListTraversal Function: \n";
    ListTraversal(head);

    std::cout<<"Testing the Insert at Head Function: \n";
    sllInsertHead('K', &head);
    ListTraversal(head);

    std::cout<<"Testing the General Node Function: \n";
    sllGeneralInsert('X', head->next->next);
    ListTraversal(head);

    std::cout<<"Testing the Insert at End Function: \n";
    sllInsertEnd('G', &head);
    ListTraversal(head);

    std::cout<<"Testing the delete a Node Function: \n";
    sllDeleteNode('X', &head);
    ListTraversal(head);

    std::cout<<"Testing the Delete List Function: \n";
    sllDeleteList(&head);
    ListTraversal(head);

    return 0;
}