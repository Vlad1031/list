#pragma once
#include <iostream>

struct Elem{
    Elem *next, *prev;
    int element;
};

class List{
    int sizeList;
    Elem *first, *last;

public:
    List();
//    List(const List& l);
    ~List();

    void pushFront(const int value);
    void pushBack(const int value);
    int at(const int index);
    void clear();
    int size();
    int size() const;

    List& operator= (const List &l);
    bool operator== (const List &l);
    bool operator!= (const List &l);
    friend std::ostream& operator<< (std::ostream &out, const List &l);
};
