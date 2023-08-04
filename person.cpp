//
// Created by Jeremiah Barro on 1/8/2023.
//

#include <cstring>
#include "person.h"

//Name:   Person
//Desc:   Constructor for Person class.
//input:  none
//output: none
//return: none
Person::Person() {
};

//Name:   Person
//Desc:   Constructor for Person class for instantiating with all Person  details.
//input:  none
//output: none
//return: none
Person::Person(const char* id, const char* fname, const char* lname, const char* familyId)  {
    strcpy(this->id, id);
    strcpy(this->fname, fname);
    strcpy(this->lname, lname);
    strcpy(this->familyId, familyId);
};

//Name:   ~Person
//Desc:   Destructor for Person class. The delete keyword deallocates memory and the pointers are
//        set to null so as not to leave dangling pointers.
//input:  none
//output: none
//return: none
Person::~Person() {
    delete id;
    id = nullptr;
    delete fname;
    fname = nullptr;
    delete lname;
    lname = nullptr;
    delete familyId;
    familyId = nullptr;
}

//Name:   Person
//Desc:   Copy constructor for LinkedList class.
//input:  none.
//output: none
//return: none
Person::Person(const Person &person) {
    id = person.id;
    fname = person.fname;
    lname = person.lname;
    familyId = person.familyId;

    *this = person;
};

//Name:   operator=
//Desc:   Redefines = to perform deep copy.
//input:  Reference to the linked list to copy from.
//output: none
//return: A reference to the linked list that used the method to copy.
const Person & Person::operator= (const Person &person) {
    if (this == &person) {
        return *this;
    }
    else {
        this->id= person.id;
        this->fname = person.fname;
        this->lname = person.lname;
        this->familyId = person.familyId;

        return *this;
    }
};

//Name:   getId
//Desc:   Getter for the Person id.
//input:  none
//output: none
//return: A pointer to a string representing the person id.
char* Person::getId() const {
    return id;
}

//Name:   getFname
//Desc:   Getter for the Person first name.
//input:  none
//output: none
//return: A pointer to a string representing the person first name.
char* Person::getFname() const {
    return fname;
}

//Name:   getLname
//Desc:   Getter for the Person last name.
//input:  none
//output: none
//return: A pointer to a string representing the person last name.
char* Person::getLname() const {
    return lname;
}

//Name:   getFamilyId
//Desc:   Getter for the Person family id.
//input:  none
//output: none
//return: A pointer to a string representing the person family id.
char* Person::getFamilyId() const {
    return familyId;
}

//Name:   print
//Desc:   Prints the id, first name and last name in the required format of a person object.
//input:  none
//output: none
//return: none
void Person::print() const {
    cout << "ID: " << id << endl;
    cout << "First Name: "<< fname << endl;
    cout << "Last Name: " << lname <<  endl << endl;
}