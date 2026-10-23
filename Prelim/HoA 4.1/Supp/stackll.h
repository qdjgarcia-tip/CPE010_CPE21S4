#ifndef STACKLL_H
#define STACKLL_H

template <typename T>
class SinglyList{
    public:
    T data;
    SinglyList<T>* next;
};

template <typename T>
SinglyList<T>* peek = nullptr;

template <typename T>
bool isEmptyll(){
    return (peek<T> == nullptr);
}
template <typename T>
T llTop(){
    if(isEmptyll<T>()){
    return '\0'; // for char data type the null is '\0', prevents invalid memory accessing
    }else{
    return peek<T>->data;
    }
}

template <typename T>
void llpush(T newData){

    SinglyList<T>* newNode = new SinglyList<T>;
    newNode->data = newData;

    newNode->next = peek<T>;

    peek<T> = newNode;
}
template <typename T>
void llpop(){
    if(isEmptyll<T>()){
    return;
    }else{
    SinglyList<T>* temp = peek<T>;

    peek<T> = peek<T>->next;

    delete temp;

    }
}
#endif