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
    this->id = new char[strlen(id) + 1];
    strcpy(this->id, id);

    this->fname = new char[strlen(fname) + 1];
    strcpy(this->fname, fname);

    this->lname = new char[strlen(lname) + 1];
    strcpy(this->lname, lname);

    this->familyId = new char[strlen(familyId) + 1];
    strcpy(this->familyId, familyId);
};

//Name:   ~Person
//Desc:   Destructor for Person class. The delete keyword deallocates memory and the pointers are
//        set to null so as not to leave dangling pointers.
//input:  none
//output: none
//return: none
Person::~Person() {
    delete[] id;
    delete[] fname;
    delete[] lname;
    delete[] familyId;
}

//Name:   Person
//Desc:   Copy constructor for LinkedList class.
//input:  none.
//output: none
//return: none
Person::Person(const Person &person) {
    if (this != &person) {
        this->id = new char[strlen(person.id) + 1];
        strcpy(this->id, person.id);

        this->fname = new char[strlen(person.fname) + 1];
        strcpy(this->fname, person.fname);

        this->lname = new char[strlen(person.lname) + 1];
        strcpy(this->lname, person.lname);

        this->familyId = new char[strlen(person.familyId) + 1];
        strcpy(this->familyId, person.familyId);
    }

    *this = person;
};

//Name:   operator=
//Desc:   Redefines = to perform deep copy.
//input:  Reference to the linked list to copy from.
//output: none
//return: A reference to the linked list that used the method to copy.
const Person & Person::operator= (const Person &person) {
    if (this != &person) {
        delete[] this->id;
        this->id = new char[strlen(person.id) + 1];
        strcpy(this->id, person.id);

        delete[] this->fname;
        this->fname = new char[strlen(person.fname) + 1];
        strcpy(this->fname, person.fname);

        delete[] this->lname;
        this->lname = new char[strlen(person.lname) + 1];
        strcpy(this->lname, person.lname);

        delete[] this->familyId;
        this->familyId = new char[strlen(person.familyId) + 1];
        strcpy(this->familyId, person.familyId);
    }

    return *this;
}

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
const char* Person::getFname() const {
    return fname;
}

//Name:   getLname
//Desc:   Getter for the Person last name.
//input:  none
//output: none
//return: A pointer to a string representing the person last name.
const char* Person::getLname() const {
    return lname;
}

//Name:   getFamilyId
//Desc:   Getter for the Person family id.
//input:  none
//output: none
//return: A pointer to a string representing the person family id.
const char* Person::getFamilyId() const {
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