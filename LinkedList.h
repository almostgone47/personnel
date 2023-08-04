//
// Created by Jeremiah Barro on 1/8/2023.
//

#ifndef PERSONNEL_LINKEDLIST_H
#define PERSONNEL_LINKEDLIST_H

#include <cstring>

//The LinkedList class only needs to
//        support add, remove, and find (and constructors, destructors, assignment
//operators, etc.)

#include "person.h"

struct Node {
    Person data;
    Node *next = nullptr;
};

class LinkedList {
private:
    Node *head = nullptr;
    int size = 0;

public:
    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList &list);
    const LinkedList & operator= (const LinkedList &list);

    void insertFront(Person);
    void removeById(const char*);
    Person* searchById(const char*) const;
    void printList() const;
};

#endif //PERSONNEL_LINKEDLIST_H
