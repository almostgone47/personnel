//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "LinkedList.h"

void LinkedList::insertFront(Person person) {
    Node *newNode = new Node();
    newNode->data = person;
    newNode->next = head;
    head = newNode;
}

void LinkedList::removeById(const char* personId) {
    Node *curr = head, *prev = nullptr;

    while(curr) {
        if (personId == curr->data.getId()) {

        }
        prev = curr;
        curr = curr->next;
    }
}

Person* LinkedList::searchById(const char*) const {

}

void LinkedList::printList() const {

}