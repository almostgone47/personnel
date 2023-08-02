//
// Created by Jeremiah Barro on 1/8/2023.
//

#include "personmgr.h"

void PersonMgr::addPerson(Person person) {
    personnelTable.insert(person.getId(), person);
};

void PersonMgr::removePerson(char* id) {
    personnelTable.remove(id);
};

Person* PersonMgr::findPerson(char* id){
    personnelTable.lookup(id);
};
