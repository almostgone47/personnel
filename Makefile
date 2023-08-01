CC = g++
CPPFLAGS = -std=c++23 -Wall -g

personnel: personnel.o person.o personmgr.o

personnel.o: personnel.cpp

person.o: person.cpp person.h

personmgr.o: personmgr.cpp personmgr.h

clean:
	rm *.o personnel