#pragma once
#include <iostream>

struct Elem{
    Elem *next, *prev;
    int element;
};

class List{
    int m_sizeList;
    Elem *m_first, *m_last;

public:
    List();
    List(const List& l);
    ~List();

    void pushFront(const int value);
    void pushBack(const int value);
    int at(const int index);
    void clear();
    int size();

    int at(const int index) const;
    int size() const;

    List& operator= (const List &l);
    bool operator== (const List &l);
    bool operator!= (const List &l);
    friend std::ostream& operator<< (std::ostream &out, const List &l);
};
