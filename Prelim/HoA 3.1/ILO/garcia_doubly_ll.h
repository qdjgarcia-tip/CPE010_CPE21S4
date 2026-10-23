#ifndef DOUBLY_LL_H
#define DOUBLY_LL_H
//DoubleList Node
template <typename T>
class DoubleList{
    public:
    T data;
    DoubleList<T>* next;
    DoubleList<T>* prev;
};

 //creating a node function
template <typename T>
DoubleList<T> *createNode(T newData){
    //dynamic memory allocation for a new node
    DoubleList<T>* newNode= new DoubleList<T>;

    newNode->data = newData;
    //point it to the next node
    newNode->prev = nullptr;
    newNode->next = nullptr;

    return newNode;

}

template <typename T>
void dllTraverse(DoubleList<T>* currentNode){
    // check if the list is empty
    if(currentNode == nullptr){
        std::cout<<"The list is empty";
        return;
    }

    DoubleList<T>* tail;
    std::cout<<"FORWARD"<<std::endl;
    //forwawrd traverse
    while(currentNode != nullptr){
        std::cout<< currentNode->data << " ";
        tail = currentNode;
        currentNode=currentNode->next;
    }
    std::cout<<std::endl;
    //reverse traverse
    std::cout<<"REVERSE"<<std::endl;
    while(tail != nullptr){
        std::cout<<tail->data << " ";
        tail = tail->prev;
    }
    std::cout<<std::endl;


}   

template <typename T>
void dllInsert(T newData, DoubleList<T>** currentNode){

    // create a new node:
    DoubleList<T>* newNode = createNode(newData);
    //point the newNode to the currentNode (head)
    newNode->next = *currentNode;
    //point the currentNode(head) to the newNode
    (*currentNode)->prev = newNode;
    //updating the header pointer
    *currentNode = newNode;

}

//inserting at the End;
template <typename T>
void dllInsertEnd(T newData, DoubleList<T>* currentHead){
    //create a new node
    DoubleList<T>* newNode = createNode(newData);

    //traverse until we reach the last node
    while(currentHead->next != nullptr){
        currentHead = currentHead->next;
    }

    //connect the new node back to the last node
    newNode->prev = currentHead;
    //connect the current node back to the new node
    currentHead->next = newNode;
}

template <typename T>
void dllGeneralInsert(T newData, DoubleList<T>* prevNode){

    if(prevNode == nullptr){
        
        std::cout<<"Previous node cannot be null"<<std::endl;
    }

    DoubleList<T>* newNode = createNode(newData);

    newNode->data = newData;

    newNode->next = prevNode->next;

    newNode->prev = prevNode;

        if(newNode->next != nullptr){
        prevNode->next->prev = newNode;
    }
    prevNode->next = newNode;
}

template <typename T>
void dllDeleteNode(T findData, DoubleList<T>** head){
    if(*head == nullptr) return;

    DoubleList<T>* currNode= *head;
    DoubleList<T>* prevNode= nullptr;

    while(currNode != nullptr && currNode-> data != findData){
       prevNode = currNode;
       currNode = currNode->next; 
    }

    if(currNode == nullptr) return;

    if(prevNode == nullptr){
        *head = currNode-> next;
        
        if(*head != nullptr){
            (*head)->prev = nullptr;
        }

    }else{
        prevNode->next = currNode->next;

        if(currNode->next){
            currNode->next->prev = prevNode;
    }

    delete currNode;
    }
}

template<typename T>
void dlldeleteList(DoubleList<T>** head){
    
    DoubleList<T>* current = *head;

    while(current != nullptr){
        DoubleList<T>* temp = current;
        current = current->next;
        delete temp;
    }

    *head = nullptr;
}



#endif