//
// Created by Jeremiah Barro on 1/8/2023.
//

#ifndef PERSONNEL_HASHTABLE_H
#define PERSONNEL_HASHTABLE_H

#include "LinkedList.h"

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

    bool isEmpty();
    void insert(char *id, Person);
    void remove(char []);
    const Person * lookup(char []);
    void dumpTable();

};

#endif //PERSONNEL_HASHTABLE_H
