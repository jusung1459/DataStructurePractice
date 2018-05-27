class Node {
    private: 
        int value;
        Node* next;
        friend class Linkedlist;
}

class LinkedList {
    public:
        //constructor
        LinkedList();
        //destructor
        ~LinkedList();
        //is list empty?
        bool empty() const;
        //get front element
        const int front() const;
        //add element to front
        void addFront(const int num);
        //remove front element from list
        void remove();
    
    private:
        //pointer to head
        Node* head;
}