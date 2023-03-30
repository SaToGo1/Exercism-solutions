#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

size_t List::size() {
    return current_size;
}

void List::push(int entry) {
    Element node(entry);
    if(head == nullptr){
        head = &node;
        tail = &node;
    }else{
        tail->next = &node;
        tail = &node;
    }
    node.next = nullptr;
    current_size++;
}

int List::pop() {
    Element* p = head;
    head = head->next;
    current_size--;

    std::cout << "\n\n";
    std::cout << "p->data " << p->data;
    return p->data;
}

void List::reverse() {
    // TODO: Implement a function to reverse the order of the elements in the
    // list.
}

List::~List() {
    // TODO: Ensure that all resources are freed on destruction
}

}  // namespace simple_linked_list

//
