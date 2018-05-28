typedef int Elem;

class DNode {
    private: 
        Elem elem;
        DNode* prev;
        DNode* next;
        
        friend class DLinkedList;
};

class DLinkedList {
    public:
        //constructor
        DLinkedList();
        //destructor
        ~DLinkedList();
        //is empty?
        bool empty();
        //get front element
        const Elem& front() const;
        //get back element
        const Elem& back() const;
        //add front
        void addFront(const Elem& e);
        //add back
        void addBack(const Elem& e);
        //remove front
        void removeFront();
        //remove back
        void removeBack();
    private:
        DNode* header;
        DNode* trailer;
    protected:
        void add(DNode* v, const Elem& e);
        void remove(DNode* v);
};