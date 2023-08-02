//
// Created by Jeremiah Barro on 1/8/2023.
//

#ifndef PERSONNEL_LINKEDLIST_H
#define PERSONNEL_LINKEDLIST_H

//The LinkedList class only needs to
//        support add, remove, and find (and constructors, destructors, assignment
//operators, etc.)

#include "person.h"

class LinkedList {
private:
    struct Node {
        Person data;
        Node *next = nullptr;
    };
    Node *head = nullptr;
    int size = 0;

public:
    void insertFront(Person);
    void removeById(const char*);
    Person* searchById(const char*) const;
    void printList() const;
};

#endif //PERSONNEL_LINKEDLIST_H
