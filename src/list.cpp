#include <iostream>
#include "list.h"

List::List(){
    std::cout << "Constructor" << std::endl;
    sizeList = 0;
}

//List::List(const List& l){
//    std::cout << "\nConstructor copy" << std::endl;
//    clear();

//    Elem *p = l.first;
//    while(p != nullpts){
//        pushBack(p->element);
//        p = p->next;
//    }
//}

List::~List(){
    std::cout << "~Destructor" << std::endl;
    clear();
}

void List::pushFront(const int value){
    Elem *p = new Elem;

    p->prev = nullptr;
    p->element = value;
    p->next = first;

    if(first != nullptr){
        first->prev = p;
    }

    sizeList == 0 ? first = last = p : first = p;

    sizeList++;
}

void List::pushBack(const int value){
    Elem *p = new Elem;

    p->prev = last;
    p->element = value;
    p->next = nullptr;

    if(last != nullptr){
        last->next = p;
    }

    sizeList == 0 ? first = last = p : last = p;

    sizeList++;
}

int List::at(const int index){
    Elem *p;

    if(index <= sizeList && index >= 0){
        p = first;
        for(int i = 0; i < index; i++){
            p = p->next;
        }
    }
    else{
        std::cout << "dont have this index" << std::endl;
        return 0; //to do add exeption
    }
    std::cout << p->element;
    return p->element;
}

void List::clear(){
//    Elem *p;
    std::cout << "?";
    auto p = first;
    while(first){
        p = p->next;
//        p = first->next;
//        std::cout << "*";
//        delete first;
//        first = p;
//        std::cout << "!";
    }
    sizeList = 0;
    first = last = nullptr;
}

List& List::operator=(const List &l){
//    clear();

//    Elem *p = l.first;
//    std::cout << l.size();
//    while(p != nullptr){
//        pushBack(p->element);
//        p = p->next;
//    }
//    return *this;
}

bool List::operator==(const List &l){
    if(sizeList != l.sizeList){
        return false;
    }

    Elem *listOne, *ListTwo;

    listOne = first;
    ListTwo = l.first;

    while (listOne != nullptr){
        if(listOne->element != ListTwo->element){
            return false;
        }
        listOne = listOne->next;
        ListTwo = ListTwo->next;
    }
    return true;
}

bool List::operator!=(const List &l){
    if(sizeList != l.sizeList){
        return true;
    }

    Elem *listOne, *ListTwo;

    listOne = first;
    ListTwo = l.first;

    while (listOne != nullptr){
        if(listOne->element == ListTwo->element){
            return false;
        }
        listOne = listOne->next;
        ListTwo = ListTwo->next;
    }
    return true;
}

std::ostream& operator<< (std::ostream &out, const List &l){
    Elem *p;

    p = l.first;
    while(p){
        out << p->element << " ";
        p = p->next;
    }
    return out;
}

int List::size()
{
    return sizeList;
}

int List::size() const
{
    return sizeList;
}
