
class Node {
    private:
        int data;
        Node* next;

        friend class LinkedList;
};

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
        Node* head;
};