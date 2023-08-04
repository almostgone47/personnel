//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "HashTable.h"

//Name:   HashTable
//Desc:   Constructor for HashTable class.
//input:  none
//output: none
//return: none
HashTable::HashTable() {
    tableSize = 9973;
    arr = new LinkedList[tableSize];
    for (int i = 0; i < tableSize; i++) {
        arr[i] = LinkedList();
    }
}

//Name:   HashTable
//Desc:   Constructor for HashTable class with custom table size.
//input:  An integer for the size of the table being created.
//output: none
//return: none
HashTable::HashTable(int hashTableSize) {
    tableSize = hashTableSize;
    arr = new LinkedList[tableSize];
    for (int i = 0; i < tableSize; i++) {
        arr[i] = LinkedList();
    }
}

//Name:   HashTable
//Desc:   Copy constructor for HashTable class.
//input:  none
//output: none
//return: none
HashTable::HashTable(const HashTable& table) {
    tableSize = table.tableSize;
    arr = new LinkedList[tableSize];
    for (int i = 0; i < tableSize; i++) {
        arr[i] = table.arr[i];
    }
    length = table.length;
}

//Name:   operator=
//Desc:   Redefines = to perform deep copy.
//input:  Reference to the linked list to copy from.
//output: none
//return: A reference to the linked list that used the method to copy.
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

//Name:   ~HashTable
//Desc:   Destructor for HashTable class.
//input:  none
//output: none
//return: none
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

//Name:   insert
//Desc:   Uses a hash of the id passed for an index in the array holding the hash table buckets.
//input:  none
//output: none
//return: none
void HashTable::insert(char *id, Person person) {
    unsigned int index = hashFunction(id);
    arr[index].insertFront(person);
    length++;
}

//Name:   remove
//Desc:   Uses the passed in id get the hash used as the index in the hash table array and calls the LinkedList removeById method.
//input:  A string for the id of the person object to be removed.
//output: none
//return: none
void HashTable::remove(char id[]) {
    unsigned int index = hashFunction(id);
    arr[index].removeById(id);
    length--;
}

//Name:   lookup
//Desc:   Uses the passed in id get the hash used as the index in the hash table array and calls the LinkedList searchById method.
//input:  A string for the id of the person object to search for.
//output: none
//return: A pointer to a Person object searched for.
const Person * HashTable::lookup(char id[]) {
    unsigned int index = hashFunction(id);
    return arr[index].searchById(id);
}

//Name:   hashFunction
//Desc:   Creates hash from the passed in Person id to be used as the index in the hash table array of buckets.
//input:  A string for the id of the person object to be indexed.
//output: none
//return: A hash that is no larger than the tableSize.
unsigned int HashTable::hashFunction(const char* key) {
    unsigned int hash = 0;
    unsigned int mod = tableSize;

    for (int i = 0; key[i]; i++) {
        hash += key[i];
    }

    hash = hash % mod;
    return hash;
}

//Name:   dumpTable
//Desc:   Loops through the hash table array and prints every item in the hash table.
//input:  none
//output: The details for each of the Person objects in the hash table.
//return: none
void HashTable::dumpTable() {
    for (int i = 0; i < tableSize; i++) {
        arr[i].printList();
    }
}