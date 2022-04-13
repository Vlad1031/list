#include "list.h"

List::List()
{
    m_first = m_last = nullptr;
    m_sizeList = 0;
}

List::List(const List& l)
{
    m_first = m_last = nullptr;
    m_sizeList = 0;
    Elem *p = l.m_first;
    while(p != nullptr)
    {
        pushBack(p->element);
        p = p->next;
    }
}

List::~List()
{
    clear();
}

void List::pushFront(const int value)
{
    try {
        new Elem;
    }  catch (std::exception) {
        throw "Error";
    }

    Elem *p = new Elem;

    p->prev = nullptr;
    p->element = value;
    p->next = m_first;

    if(m_first != nullptr)
    {
        m_first->prev = p;
    }

    m_sizeList == 0 ? m_first = m_last = p : m_first = p;

    m_sizeList++;
}

void List::pushBack(const int value)
{
    try {
        new Elem;
    }  catch (std::exception) {
        throw "Error";
    }

    Elem *p = new Elem;

    p->prev = m_last;
    p->element = value;
    p->next = nullptr;

    if(m_last != nullptr)
    {
        m_last->next = p;
    }

    m_sizeList == 0 ? m_first = m_last = p : m_last = p;

    m_sizeList++;
}

int List::at(const int index)
{
    Elem *p;

    if(index >= m_sizeList || index < 0){
        throw "dont have this index";
    }

    p = m_first;
    for(int i = 0; i < index; i++)
    {
        p = p->next;
    }
    return p->element;
}

void List::clear()
{
    Elem *p;
    while(m_first)
    {
        p = m_first->next;
        delete m_first;
        m_first = p;
    }
    m_sizeList = 0;
    m_first = m_last = nullptr;
}

List& List::operator=(const List &l)
{
    clear();

    Elem *p = l.m_first;
    while(p != nullptr)
    {
        pushBack(p->element);
        p = p->next;
    }
    return *this;
}

bool List::operator==(const List &l)
{
    if(m_sizeList != l.m_sizeList)
    {
        return false;
    }

    Elem *listOne, *ListTwo;

    listOne = m_first;
    ListTwo = l.m_first;

    while (listOne != nullptr)
    {
        if(listOne->element != ListTwo->element)
        {
            return false;
        }
        listOne = listOne->next;
        ListTwo = ListTwo->next;
    }
    return true;
}

bool List::operator!=(const List &l)
{
    if(m_sizeList != l.m_sizeList)
    {
        return true;
    }

    Elem *listOne, *ListTwo;

    listOne = m_first;
    ListTwo = l.m_first;

    while (listOne != nullptr)
    {
        if(listOne->element == ListTwo->element)
        {
            return false;
        }
        listOne = listOne->next;
        ListTwo = ListTwo->next;
    }
    return true;
}

std::ostream& operator<< (std::ostream &out, const List &l)
{
    Elem *p;

    p = l.m_first;
    while(p)
    {
        out << p->element << " ";
        p = p->next;
    }
    return out;
}

int List::size()
{
    return m_sizeList;
}

int List::at(const int index) const
{
    Elem *p;

    if(index >= m_sizeList){
        throw "Error";
    }

    if(index <= m_sizeList && index >= 0)
    {
        p = m_first;
        for(int i = 0; i < index; i++)
        {
            p = p->next;
        }
    }
    else
    {
        std::cout << "dont have this index" << std::endl;
        return 0; //to do add exeption
    }
    return p->element;
}


int List::size() const
{
    return m_sizeList;
}
