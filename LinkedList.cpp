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
    if (this != &list) {
        head = nullptr;
        size = list.size;

        Node *curr = list.head;
        Node *prev = nullptr;

        while (curr) {
            Node *newNode = new Node();
            newNode->data = curr->data;

            if (prev == nullptr) {
                head = newNode;
            } else {
                prev->next = newNode;
            }

            prev = newNode;
            curr = curr->next;
        }
    }

    *this = list;
};

//Name:   operator=
//Desc:   Redefines = to perform deep copy.
//input:  Reference to the linked list to copy from.
//output: none
//return: A reference to the linked list that used the method to copy.
const LinkedList & LinkedList::operator= (const LinkedList &list) {
    if (this != &list) {
        while (head != nullptr) {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        size = 0;

        Node *curr = list.head;
        Node *prev = nullptr;

        while (curr) {
            Node *newNode = new Node();
            newNode->data = curr->data;

            if (prev == nullptr) {
                head = newNode;
            } else {
                prev->next = newNode;
            }

            prev = newNode;
            curr = curr->next;
        }
    }

    return *this;
};

//Name:   insertFront
//Desc:   Adds a node to the front of the linked list.
//input:  Person object to be inserted into the linked list.
//output: none
//return: none
void LinkedList::insertFront(Person person) {
    Node *newNode = new Node();
    newNode->data = person;
    newNode->next = head;
    head = newNode;
    size++;
}

//Name:   removeById
//Desc:   Removes the first node that matches the passed in Person id.
//input:  A string representing the id of the person object to be removed.
//output: none
//return: none
void LinkedList::removeById(const char* id) {
    Node *curr = head, *prev = nullptr;

    while(curr) {
        if (strcmp(id, curr->data.getId()) == 0) {
            if (prev == nullptr) {
                head = curr->next;
            } else {
                prev->next = curr->next;
            }

            delete curr;
            size--;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

//Name:   searchById
//Desc:   Searches for a matching Person id to the passed in id argument.
//input:  A string representing the id of the person object to be returned.
//output: none
//return: A pointer to a person object searched ror.
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

//Name:   printList
//Desc:   Loops through each node and calls the Person print method.
//input:  none
//output: The person object details.
//return: none
void LinkedList::printList() const {
    Node *curr = head;

    while(curr) {
        curr->data.print();
        curr = curr->next;
    }
}