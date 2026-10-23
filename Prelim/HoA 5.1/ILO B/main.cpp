#include <iostream>
#include "queueLL.h"
#include "queueArr.h"

int main(){
    // LINKED LISTS
    /*
    std::cout<<"Queue with Linked Lists"<<std::endl;
    qNode<int>* front = nullptr;
    qNode<int>* back = nullptr;

    enqueue(1, &front, &back);
    std::cout<<"front: " << front->data <<" back: "<<back->data<<"\n";
    enqueue(2, &front, &back);
    enqueue(3, &front, &back);
    std::cout<<"front: " << front->data <<" back: "<<back->data<<"\n";
    
    display(front);
    dequeue(&front, &back);
    std::cout<<"front: " << front->data <<" back: "<<back->data<<"\n";
    dequeue(&front, &back);
    std::cout<<"front: " << front->data <<" back: "<<back->data<<"\n";
    dequeue(&front, &back);
    dequeue(&front, &back);
    */

    //ARRAY
    std::cout<<"Queue with Array"<<std::endl;
    queueArr<int> q(6);
    q.Enqueue(1);
    std::cout<<"Front: "<<q.Front()<<" Back: "<< q.Back() << " Size: " << q.Size() <<std::endl;
    q.Enqueue(2);
    std::cout<<"Front: "<<q.Front()<<" Back: "<< q.Back() << " Size: " << q.Size() <<std::endl;
    q.Enqueue(3);
    std::cout<<"Front: "<<q.Front()<<" Back: "<< q.Back() << " Size: " << q.Size() <<std::endl;
    q.Enqueue(4);
    std::cout<<"Front: "<<q.Front()<<" Back: "<< q.Back() << " Size: " << q.Size() <<std::endl;
    q.Enqueue(5);
    std::cout<<"Front: "<<q.Front()<<" Back: "<< q.Back() << " Size: " << q.Size() <<std::endl;
    q.Enqueue(6);
    std::cout<<"Front: "<<q.Front()<<" Back: "<< q.Back() << " Size: " << q.Size() <<std::endl;
    q.Enqueue(7);
    std::cout<<"Front: "<<q.Front()<<" Back: "<< q.Back() << " Size: " << q.Size() <<std::endl;
    

    // copy constructor
    queueArr<int>q2(q);

    // copy assignment operator
    queueArr<int>q3(6);
    q3.Enqueue(9);

    q3 = q;

    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();
    q.Dequeue();

    return 0;
}