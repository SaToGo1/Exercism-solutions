#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

size_t List::size() {
    return current_size;
}

void List::push(int entry) {
    Element* node = new Element (entry);
    std::cout << node;
    if(head == nullptr){
        head = node;
        tail = node;
    }else{
        tail->next = node;
        tail = node;
    }
    node->next = nullptr;
    current_size++;
}

int List::pop() {
    if(head == nullptr){
        return -1;
    }
    
    Element* p = head;
    if(p != tail){
        
        while(p->next != tail){
            p = p->next;
        }

        tail = p;
        p = p->next;
        tail->next = nullptr;
    }else{
        head = nullptr;
    }
    
    current_size--;

    int value = p->data;
    delete p;
    return value;
}

void List::reverse() {
    //Null list
    if(head == nullptr){
        return ;
    }
    //1 element list 
    if(head == tail){
        return ;
    }

    Element* pFirst = head;
    Element* pSecond = head->next;
    Element* pThird = head->next->next;
      
    pFirst->next = nullptr;
    tail = pFirst;

    while(pThird != nullptr){
        pSecond->next = pFirst;
        pFirst = pSecond;
        pSecond = pThird;
        pThird = pThird->next;
    }

    //end of the list or 2 elements list.
    if(pThird == nullptr){
        pSecond->next = pFirst;
        head = pSecond; 
    }

}

List::~List() {
    // TODO: Ensure that all resources are freed on destruction
    Element* p;
    while(head != nullptr){
        p = head;
        head = head->next;
        delete p;
    }
}

}  // namespace simple_linked_list