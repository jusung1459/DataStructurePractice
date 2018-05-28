#include "DLL.h"

DLinkedList::DLinkedList() {
    header = new DNode;
    trailer = new DNode;
    header->next = trailer;
    trailer->prev = header;
}

DLinkedList::~DLinkedList() {
    while(!empty()) {
        removeFront();
    }
    delete header;
    delete trailer;
}

bool DLinkedList::empty() {
    return (header->next == trailer);
}

const Elem& DLinkedList::front() const {
    return header->elem;
}

const Elem& DLinkedList::back() const {
    return trailer->elem;
}

void DLinkedList::addFront(const Elem& e) {
    add(header->next,e);
}

void DLinkedList::addBack(const Elem& e) {
    add(trailer->prev, e);
}

void DLinkedList::removeFront() {
    
}

void DLinkedList::removeBack() {

}

void DLinkedList::add(DNode* v, const Elem& e) {
    DNode* node = new DNode;
    node->elem = e;
    node->next = v;
    node->prev = v->prev;
    v->prev->next = v->prev = node;
}   

void DLinkedList::remove(DNode* v) {

}

void main(void) {

}