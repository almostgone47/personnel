//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "HashTable.h"

HashTable::HashTable() {
    LinkedList *list[tableSize];
}

HashTable::HashTable(int hashTableSize) {
    tableSize = hashTableSize;
    LinkedList *list[tableSize];
}

HashTable::~HashTable() {

}

bool HashTable::isEmpty() {
    return length == 0;
}

void HashTable::insert(char *id, Person person) {
//    1) use the hash function on the ID to get the index in the array
    unsigned int index = hashFunction(id);
//    2) call the "add" method on the linked list object at that location in the
//    array
    list[index].insertFront(person);
}

void HashTable::remove(char id[]) {
//    1) use the hash function on the ID to get the index in the array
    unsigned int index = hashFunction(id);
//    2) call the "remove" method on the linked list object at that location in the
//    array
    list[index].removeById(id);
}

const Person * HashTable::lookup(char id[]) {
//    1) use the hash function on the ID to get the index in the array
    unsigned int index = hashFunction(id);
//    2) call the "find" method on the linked list object at that location in the
//    array
    return list[index].searchById(id);
}

unsigned int HashTable::hashFunction(const char* key) {
    unsigned int hash = 0;

    for (int i = 0; key[i]; i++) {
        hash += key[i];
    }

    return hash % tableSize;
}