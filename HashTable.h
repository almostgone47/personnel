//
// Created by Jeremiah Barro on 1/8/2023.
//

#ifndef PERSONNEL_HASHTABLE_H
#define PERSONNEL_HASHTABLE_H

#include "LinkedList.h"

//The array in the Hashtable class should be dynamically allocated. You should
//allocate it to a size of 9973 entries.

const int TABLE_SIZE = 9973;

class HashTable {
private:
    LinkedList *table[TABLE_SIZE] = {nullptr};
    int hashFunction();
public:
    bool isEmpty();
    void insert();
    void remove();
    void lookup();
};

#endif //PERSONNEL_HASHTABLE_H
