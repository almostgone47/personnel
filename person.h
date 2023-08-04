//
// Created by Jeremiah Barro on 1/8/2023.
//

#ifndef PERSONNEL_PERSON_H
#define PERSONNEL_PERSON_H

#include <iostream>

using namespace std;

class Person {
private:
    char *id;
    char *fname;
    char *lname;
    char *familyId;
public:
    Person();
    Person(const char* id, const char* fname, const char* lname, const char* familyId);
    ~Person();
    Person(const Person &person);
    const Person & operator= (const Person &person);

    char* getId() const;
    char* getFname() const;
    char* getLname() const;
    char* getFamilyId() const;
    void print() const;
};
#endif //PERSONNEL_PERSON_H
