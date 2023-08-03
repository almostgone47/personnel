//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "personmgr.h"

PersonMgr::PersonMgr() {
}

PersonMgr::~PersonMgr() {
}

void PersonMgr::addPerson(Person person) {
    table.insert(person.getId(), person);
};

void PersonMgr::removePerson(char* id) {
    table.remove(id);
};

const Person* PersonMgr::findPerson(char* id) {
    const Person *person = table.lookup(id);
    return person;
};
