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