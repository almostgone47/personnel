//
// Created by Jeremiah Barro on 1/8/2023.
//

#ifndef PERSONNEL_PERSONMGR_H
#define PERSONNEL_PERSONMGR_H

#include "person.h"
#include "HashTable.h"

class PersonMgr {
private:
    HashTable table;

public:
    PersonMgr();
    ~PersonMgr();

    void addPerson(Person);
    void removePerson(char*);
    const Person* findPerson(char*);
};

#endif //PERSONNEL_PERSONMGR_H
