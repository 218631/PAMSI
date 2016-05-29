__start__: tablica
	./tablica

tablica: obj/main.o obj/tablica.o obj/stoper.o

	g++ -Wall -pedantic -o tablica obj/main.o obj/tablica.o obj/stoper.o

obj/main.o: src/main.cpp inc/tablica.hh inc/stoper.hh

	g++ -c -g -Iinc -std=c++11 -Wall -pedantic -o obj/main.o src/main.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh

	g++ -c -g -Iinc -std=c++11 -Wall -pedantic -o obj/tablica.o src/tablica.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh

	g++ -c -g -Iinc -std=c++11 -Wall -pedantic -o obj/stoper.o src/stoper.cpp
