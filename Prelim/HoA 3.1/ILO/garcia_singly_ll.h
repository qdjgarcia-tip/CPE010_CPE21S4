#ifndef SINGLY_LL_H
#define SINGLY_LL_H

template <typename T>
class SinglyList{
    public:
    T data;
    SinglyList<T>* next;
};

template <typename T>
void ListTraversal(SinglyList<T>* node){
    
    if(node == nullptr){
        std::cout<<"the list is empty"<<std::endl;
        return;
    }
    
    //WHILE n IS EQUAL TO null:
    while(node!= nullptr){
        //PRINT data OF n
        std::cout<< node->data;

        if(node->next != nullptr){
            std::cout<<"->";
        }
        //GO TO THE NEXT NODE:
        node = node->next;
    }
    //PRINT THE NEXT LINE
    std::cout<<std::endl;
}

template <typename T>
void sllInsertHead(T newData, SinglyList<T>** currentHead){

    SinglyList<T>* newNode = new SinglyList<T>;

    newNode->data = newData;

    newNode->next = *currentHead;

    *currentHead = newNode;
}

template <typename T>
void sllGeneralInsert(T newData, SinglyList<T>* prevNode){

    if(prevNode == nullptr){
        
        std::cout<<"Previous node cannot be null"<<std::endl;
    }

    SinglyList<T>* newNode = new SinglyList<T>;

    newNode->data = newData;

    newNode->next = prevNode->next;

    prevNode->next = newNode;
}

template <typename T>
void sllInsertEnd(T newData, SinglyList<T>** head){

    SinglyList<T>* newNode = new SinglyList<T>;

    SinglyList<T>* currentNode = *head;

    newNode->data = newData;

    newNode->next = nullptr;

    while(currentNode->next != nullptr){
        currentNode = currentNode->next;
    }

    currentNode->next = newNode;
}

template <typename T>
void sllDeleteNode(T findData, SinglyList<T>** head){
    if(*head == nullptr) return;

    SinglyList<T>* currNode= *head;
    SinglyList<T>* prevNode= nullptr;

    while(currNode != nullptr && currNode-> data != findData){
       prevNode = currNode;
       currNode = currNode->next; 
    }

    if(currNode == nullptr) return;

    if(prevNode == nullptr){
        *head = currNode-> next;
    }else{
        prevNode->next = currNode->next;
    }

    delete currNode;
}

template<typename T>
void sllDeleteList(SinglyList<T>** head){
    
    SinglyList<T>* current = *head;

    while(current != nullptr){
        SinglyList<T>* temp = current;
        current = current->next;
        delete temp;
    }

    *head = nullptr;
}

#endif