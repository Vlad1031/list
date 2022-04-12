#include <iostream>
#include "list.h"

int main(){
    List l;

    std::cout << "Start list" << std::endl;
    l.pushBack(3);
    l.pushBack(2);
    l.pushBack(8);
    l.pushBack(5);
    std::cout << l;

//    List r{l};
//    bool g = l != r;
//    std::cout << g;

    std::cout << "\nAdd first element" << std::endl;
    l.pushFront(4);
    std::cout << l;

    std::cout << "\nAdd last element" << std::endl;
    l.pushBack(9);
    std::cout << l;

    std::cout << "\nNumber by index" << std::endl;
    l.at(4);
    std::cout << std::endl;

    std::cout << "Clear" << std::endl;
    l.clear();

    std::cout << "New list" << std::endl;
    l.pushBack(7);
    std::cout << l << std::endl;

//    List l2{l};
////    l2.print();
//    std::cout << l2 << std::endl;

    return 0;
}
