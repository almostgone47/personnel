//
// Created by Jeremiah Barro on 1/8/2023.
//

#ifndef PERSONNEL_PERSONMGR_H
#define PERSONNEL_PERSONMGR_H

#include "person.h"
#include "HashTable.h"

class PersonMgr {
private:
    HashTable personnelTable;

public:
    void addPerson(Person);
    void removePerson(char*);
    Person* findPerson(char*);

};

#endif //PERSONNEL_PERSONMGR_H
