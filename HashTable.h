//
// Created by Jeremiah Barro on 1/8/2023.
//

#ifndef PERSONNEL_HASHTABLE_H
#define PERSONNEL_HASHTABLE_H

#include "LinkedList.h"

//The array in the Hashtable class should be dynamically allocated. You should
//allocate it to a size of 9973 entries.

class HashTable {
private:
    int tableSize;
    LinkedList *arr;
    int length = 0;
    unsigned int hashFunction(const char*);
public:
    HashTable();
    HashTable(int);
    ~HashTable();
    HashTable(const HashTable& other);
    const HashTable& operator=(const HashTable& table);
    // TODO: need to finish destructor, copy and assignment operator

    bool isEmpty();
    void insert(char *id, Person);
    void remove(char []);
    const Person * lookup(char []);
    void dumpTable();
};

#endif //PERSONNEL_HASHTABLE_H
