//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "personmgr.h"

void PersonMgr::addPerson(Person person) {
    table.insert(person.getId(), person);
};

void PersonMgr::removePerson(char* id) {
    table.remove(id);
};

Person* PersonMgr::findPerson(char* id){
    table.lookup(id);
};
