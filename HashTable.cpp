//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "HashTable.h"

HashTable::HashTable() {
    tableSize = 9973;
    arr = new LinkedList[tableSize];
    for (int i = 0; i < tableSize; i++) {
        arr[i] = LinkedList();
    }
}

HashTable::HashTable(int hashTableSize) {
    tableSize = hashTableSize;
    arr = new LinkedList[tableSize];
    for (int i = 0; i < tableSize; i++) {
        arr[i] = LinkedList();
    }
}

HashTable::HashTable(const HashTable& table) {
    tableSize = table.tableSize;
    arr = new LinkedList[tableSize];
    for (int i = 0; i < tableSize; i++) {
        arr[i] = table.arr[i];
    }
    length = table.length;
}

const HashTable& HashTable::operator=(const HashTable& table) {
    if (this == &table) {
        return *this;
    }
    delete[] arr;
    tableSize = table.tableSize;
    arr = new LinkedList[tableSize];
    for (int i = 0; i < tableSize; i++) {
        arr[i] = table.arr[i];
    }

    length = table.length;
    return *this;
}

HashTable::~HashTable() {
    delete [] arr;
}

//Name:   isEmpty
//Desc:   Checks to see if hash table has any items in it.
//input:  none
//output: none
//return: True or false if empty or not.
bool HashTable::isEmpty() {
    return length == 0;
}

void HashTable::insert(char *id, Person person) {
    unsigned int index = hashFunction(id);
    arr[index].insertFront(person);
    length++;
}

void HashTable::remove(char id[]) {
    unsigned int index = hashFunction(id);
    arr[index].removeById(id);
    length--;
}

const Person * HashTable::lookup(char id[]) {
    unsigned int index = hashFunction(id);
    return arr[index].searchById(id);
}

unsigned int HashTable::hashFunction(const char* key) {
    unsigned int hash = 0;
    unsigned int mod = tableSize;

    for (int i = 0; key[i]; i++) {
        hash += key[i];
    }

    hash = hash % mod;
    return hash;
}

void HashTable::dumpTable() {
    for (int i = 0; i < tableSize; i++) {
        arr[i].printList();
    }
}