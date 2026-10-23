#include <iostream>
#include "garcia_doubly_ll.h"

int main(){

       // C P E 0 1 0
    DoubleList<char>* head = createNode('C');
    DoubleList<char>* second = createNode('P');
    DoubleList<char>* third = createNode('E');
    DoubleList<char>* fourth = createNode('0');
    DoubleList<char>* fifth = createNode('1');
    DoubleList<char>* sixth = createNode('0');
    // connecting the nodes:

    //connect the head node to the next node:
    head->next = second;
    second->prev = head;

    //connect the second to the next node:
    second->next = third;
    third->prev = second;

    third->next = fourth;
    fourth->prev = third;

    fourth->next = fifth;
    fifth->prev = fourth;

    fifth->next = sixth;
    sixth->prev = fifth;

    //traversal
    std::cout<<"Testing the dllTraverse List \n"<<std::endl;
    dllTraverse(head);
    
    std::cout<<std::endl;

    //insert at the head
    std::cout<<"Testing the Insert at Head Function \n"<<std::endl;
    dllInsert('G', &head);
    dllTraverse(head);

    std::cout<<std::endl;

    //insert at the end
    std::cout<<"Testing the Insert at End Function \n"<<std::endl;
    dllInsertEnd('E', head);
    dllTraverse(head);

    std::cout<<std::endl;

    //general insert
    std::cout<<"Testing the General Insert Function \n"<<std::endl;
    dllGeneralInsert('E', head->next->next);
    dllTraverse(head);

    std::cout<<std::endl;

    //delete a node
    std::cout<<"Testing the delete a Node Function: \n"<<std::endl;
    dllDeleteNode('C', &head);
    dllTraverse(head);

    std::cout<<std::endl;

    //delete a list
    std::cout<<"Testing the Delete List Function: \n"<<std::endl;
    dlldeleteList(&head);
    dllTraverse(head);

    std::cout<<std::endl;

    return 0;
    

}