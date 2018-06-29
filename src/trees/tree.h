
class Position {
    public:
        Position& operator*();
        Position parent() const;
        PositionList children() const;
        bool isRoot() const;
        bool isExternal() const;
};

class {
    public:
        class Position;
        class PositionList;
    public:
        int size() const;
        bool empty() const;
        Position root() const;
        PositionList position() const;
};

class PositionList {
    
};

template <typename E> class CompleteTree { public:
class Position;
int size() const;
Position left(const Position& p);
Position right(const Position& p);
Position parent(const Position& p);
bool hasLeft(const Position& p) const;
bool hasRight(const Position& p) const;
bool isRoot(const Position& p) const;
Position root();
Position last();
void addLast(const E& e);
void removeLast();
void swap(const Position& p, const Position& q); // swap node contents
};