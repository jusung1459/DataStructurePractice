#include "src/linkedlist/LL.hpp"

template <typename E>
class Stack {
    public:
        Stack();
        int size() const;
        bool empty() const;
        const E& top() const throw(StackEmpty);
        void pop(&E e);
        void push() throw(StackEmpty);
    private:
        LL<E> S;
};