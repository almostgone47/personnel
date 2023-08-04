CC = g++
CPPFLAGS = -std=c++17 -Wall -g

personnel: personnel.o person.o personmgr.o LinkedList.o HashTable.o

personnel.o: personnel.cpp

person.o: person.cpp person.h

personmgr.o: personmgr.cpp personmgr.h

LinkedList.o: LinkedList.cpp LinkedList.h

HashTable.o: HashTable.cpp HashTable.h

clean:
	rm *.o personnel