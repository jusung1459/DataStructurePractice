#include "LL.hpp"

 //constructor
LinkedList::LinkedList() 
    : head(nullptr){}

//destructor
LinkedList::~LinkedList() {
    while(!empty()){
        remove();
    }
}
//is list empty?
bool LinkedList::empty() const {
    return head == nullptr;
 }
//get front element
const int LinkedList::front() const {
    return head->data;
}
//add element to front
void LinkedList::addFront(const int num) {
    Node* node = new Node;
    node->data = num;
    node->next = head;
    head = node;
}
//remove front element from list
void LinkedList::remove() {
    if(!empty()) {
        Node* oldhead = head;
        head = oldhead->next;
        delete oldhead;
    }
}