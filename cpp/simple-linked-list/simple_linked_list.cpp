#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

size_t List::size() {
    return current_size;
}

void List::push(int entry) {
    Element node(entry);
    node.next = head;
    head = &node;
    current_size++;

    std::cout << "node.next " << node.next;
    std::cout << head->data;
    Element* p = head;
    std::cout << head->data << "\n";
    std::cout << p->data << " -> ";
    while(p->next != nullptr){
        p = p->next;
        std::cout << p->data << " -> ";
    }
}

int List::pop() {
    Element* p = head;
    head = head->next;
    current_size--;
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
