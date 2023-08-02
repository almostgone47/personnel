#include <iostream>
#include <cstring>
#include "HashTable.h"

using namespace std;

int main()
{
    const int HASHTABLESIZE = 13;
    const int NUMFAMILIES = 50;

    HashTable ht(HASHTABLESIZE);

    char fakeId[] = "MCFAKE";
    char idToCheck[8];

    cout << "======================================================================" << endl;
    cout << "Testing inserts (should show full table)" << endl;

    bool firstTime = true;
    for (int i=0;i<NUMFAMILIES;i++)
    {
	char id[8];
	char fname[8];
	char lname[8];
	char famId[10];
	Person* perPtr;

    snprintf(id, sizeof(id), "MC00%d", i);
    snprintf(fname, sizeof(fname), "FName%d", i);
    snprintf(lname, sizeof(lname), "LName%d", i);
    snprintf(famId, sizeof(famId), "FamID%d", i);

	if (firstTime)
	{
	    strncpy(idToCheck,id,8);
	    firstTime = false;
	}

	perPtr = new Person(id,fname,lname,famId);
	ht.insert(id,*perPtr);

	delete perPtr;
    }
    ht.dumpTable();


    cout << "======================================================================" << endl;
    cout << "Testing searches (should show no errors)" << endl;

    const Person* foundPerson;
    foundPerson = ht.lookup(idToCheck);
    if (foundPerson == nullptr)
	cout << "ERROR searching for " << idToCheck << endl;
    foundPerson = ht.lookup(fakeId);
    if (foundPerson != nullptr)
	cout << "ERROR searching for " << fakeId << endl;


    cout << "======================================================================" << endl;
    cout << "Testing removes (should show empty table)" << endl;

    for (int i=0;i<NUMFAMILIES;i++)
    {
    snprintf(idToCheck, sizeof(idToCheck), "MC00%d", i);
	ht.remove(idToCheck);
	foundPerson = ht.lookup(idToCheck);
	if (foundPerson != nullptr)
	    cout << "ERROR still found " << idToCheck << endl;
    }
    ht.dumpTable();

    return(0);
}
