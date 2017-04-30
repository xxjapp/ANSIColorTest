all: ANSIColorTest.o ccolor.o
	g++ -o ANSIColorTest ANSIColorTest.o ccolor.o

ANSIColorTest.o: ANSIColorTest.cpp ccolor.h

ccolor.o: ccolor.cpp ccolor.h
