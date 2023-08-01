//
// Created by Jeremiah Barro on 1/8/2023.
//

#ifndef PERSONNEL_PERSON_H
#define PERSONNEL_PERSON_H

#include <iostream>

using namespace std;

const int MAX_CHAR = 100;

class Person {
private:
    char id[MAX_CHAR];
    char fname[MAX_CHAR];
    char lname[MAX_CHAR];
    char familyId[MAX_CHAR];
public:
    Person();
    Person(const char* id, const char* fname, const char* lname, const char* familyId);
    ~Person();
    // still need copy constructor and operator=


    void print() const;
};
#endif //PERSONNEL_PERSON_H
