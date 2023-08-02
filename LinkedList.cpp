//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "LinkedList.h"

//Name:   LinkedList
//Desc:   Constructor for LinkedList class.
//input:  none
//output: none
//return: none
LinkedList::LinkedList() {
    head = nullptr;
    size = 0;
}

//Name:   ~LinkedList()
//Desc:   Destructor for LinkedList class. The delete keyword deallocates memory and the pointers are
//        set to null so as not to leave dangling pointers.
//input:  none.
//output: none
//return: none
LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    head = nullptr;
    size = 0;
};

//Name:   LinkedList()
//Desc:   Copy constructor for LinkedList class.
//input:  none.
//output: none
//return: none
LinkedList::LinkedList(const LinkedList &list) {
    head = list.head;
    size = list.size;

    *this = list;
};

const LinkedList & LinkedList::operator= (const LinkedList &list) {
    if (this == &list) {
        return *this;
    }
    else {
        this->head= list.head;
        this->size = list.size;

        return *this;
    }
};

void LinkedList::insertFront(Person person) {
    Node *newNode = new Node();
    newNode->data = person;
    newNode->next = head;
    head = newNode;
    size++;
}

void LinkedList::removeById(const char* id) {
    Node *curr = head, *prev = nullptr;

    while(curr) {
        if (strcmp(id, curr->data.getId()) == 0) {
            if (prev == nullptr) {
                head = nullptr;
            } else {
                prev->next = nullptr;
            }
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    size--;
}

Person* LinkedList::searchById(const char* id) const {
    Node *curr = head;
    Person* person = nullptr;

    while(curr) {
        if (strcmp(id, curr->data.getId()) == 0) {
            person = &curr->data;
            break;
        }
        curr = curr->next;
    }

    return person;
}

void LinkedList::printList() const {
    Node *curr = head;

    while(curr) {
        curr->data.print();
        curr = curr->next;
    }
}