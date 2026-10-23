#ifndef QUEUE_LL_H
#define QUEUE_LL_H

template <typename T>
class qNode{
    public:
    T data;
    qNode* next;
};

template <typename T>
qNode<T> *new_node(T newData){
    qNode<T> *newNode = new qNode<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

template <typename T>
void enqueue(T newData, qNode<T> **frontPtr, qNode<T> **backPtr){
    // create a new node:
    qNode<T>* newNode = new_node(newData);

    if((*frontPtr) == nullptr && (*backPtr) == nullptr){

       (*frontPtr) = newNode;

       (*backPtr) = newNode;
       return;
    }

    (*backPtr)->next = newNode;
    (*backPtr) = newNode;
    return;
}

template <typename T>
void dequeue(qNode<T> **frontPtr, qNode<T> **backPtr){

    if((*frontPtr) == nullptr && (*backPtr) == nullptr){
        std::cout<<"the queue is empty. Nothing to dequeue\n.";
        return;
    }

    qNode<T>* tempPtr = nullptr;

    tempPtr = (*frontPtr);

    if ((*frontPtr) == (*backPtr)){
        (*frontPtr) == nullptr;
        (*backPtr) == nullptr;
        delete tempPtr;
        return;
    }

    (*frontPtr) = (*frontPtr)->next;

    tempPtr->next = nullptr;
    delete tempPtr;
}

template <typename T>
void display(qNode<T>* frontPtr){
    
  if(frontPtr == nullptr){
        std::cout<<"the queue is empty. Nothing to dequeue\n.";
        return;
    }
    
    qNode<T>* current = frontPtr;

    while(current != nullptr){
        std::cout << current->data <<" ";
        current = current->next;
    }

    std::cout<<std::endl;
}
#endif