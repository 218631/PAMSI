__start__: a.out
	./a.out

a.out: main.o tablica.o stoper.o

	g++ -Wall -pedantic main.o tablica.o stoper.o

main.o: main.cpp tablica.hh stoper.hh

	g++ -c -std=c++11 -Wall -pedantic main.cpp

tablica.o: tablica.cpp tablica.hh

	g++ -c -std=c++11 -Wall -pedantic tablica.cpp

stoper.o: stoper.cpp stoper.hh

	g++ -c -std=c++11 -Wall -pedantic stoper.cpp
