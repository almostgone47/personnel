//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "HashTable.h"

HashTable::HashTable() {
    LinkedList *table[tableSize];
}

HashTable::HashTable(const int tableSize) {
    LinkedList *table[tableSize];
}

bool HashTable::isEmpty() {

}

void HashTable::insert(char *id, Person person) {
//    1) use the hash function on the ID to get the index in the array
//    2) call the "add" method on the linked list object at that location in the
//    array
}

void HashTable::remove(char id[]) {
//    1) use the hash function on the ID to get the index in the array
//    2) call the "remove" method on the linked list object at that location in the
//    array
}

const Person * HashTable::lookup(char id[]) {
//    1) use the hash function on the ID to get the index in the array
//    2) call the "find" method on the linked list object at that location in the
//    array
}