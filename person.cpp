//
// Created by Jeremiah Barro on 1/8/2023.
//

#include <cstring>
#include "person.h"

Person::Person() {
};

Person::Person(const char* id, const char* fname, const char* lname, const char* familyId)  {
    strcpy(this->id, id);
    strcpy(this->fname, fname);
    strcpy(this->lname, lname);
    strcpy(this->familyId, familyId);
};

Person::~Person() {

}

char* getId() {

}

char* getFname() {

}

char* getLname() {

}

char* getFamilyId() {

}

void Person::print() const {
    cout << id << ", " << fname << ", " << lname << ", " << familyId << endl;
}