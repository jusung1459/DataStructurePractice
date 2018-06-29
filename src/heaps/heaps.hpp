template <typename E, typename C> 
class HeapPriorityQueue {
    public:
        int size() const;
        bool empty() const; 
        void insert(const E& e); 
        const E& min();
        void removeMin();
    private: 
        VectorCompleteTree<E> T; 
        C isLess;

    typedef typename VectorCompleteTree<E>::Position Position;
};