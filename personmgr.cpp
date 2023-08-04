//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "personmgr.h"

//Name:   PersonMgr
//Desc:   Constructor for PersonMgr class.
//input:  none
//output: none
//return: none
PersonMgr::PersonMgr() {
}

//Name:   ~PersonMgr
//Desc:   Destructor for PersonMgr class. The delete keyword deallocates memory and the pointers are
//        set to null so as not to leave dangling pointers.
//input:  none
//output: none
//return: none
PersonMgr::~PersonMgr() {
}

//Name:   addPerson
//Desc:   Calls the hash table's insert class method to add a Person object to the hash table.
//input:  A Person object.
//output: none
//return: none
void PersonMgr::addPerson(Person person) {
    table.insert(person.getId(), person);
};

//Name:   removePerson
//Desc:   Calls the hash table's remove class method to remove a Person object to the hash table.
//input:  A string representing the Person id for the person object to be removed from the hast table.
//output: none
//return: none
void PersonMgr::removePerson(char* id) {
    table.remove(id);
};

//Name:   findPerson
//Desc:   Calls the hash table's lookup class method to search for a Person object in the hash table.
//input:  A string representing the Person id for the person object to search for in the hast table.
//output: none
//return: A pointer to a Person object.
const Person* PersonMgr::findPerson(char* id) {
    const Person *person = table.lookup(id);
    return person;
};
