CPPFLAGS= -c -g -Iinc -std=c++11  -Wall -pedantic

__start__: qsort
	./qsort

qsort: obj/main.o obj/lista.o obj/stoper.o obj/kolejka.o obj/tablica.o obj/quicksort.o
	g++ -Wall -pedantic -o qsort obj/main.o obj/lista.o obj/stoper.o obj/tablica.o obj/kolejka.o obj/quicksort.o

obj/main.o: src/main.cpp  inc/lista.hh  inc/node.hh inc/stoper.hh inc/quicksort.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/tablica.o: src/tablica.cpp inc/tablica.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/tablica.o src/tablica.cpp

obj/lista.o: src/lista.cpp inc/lista.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/lista.o src/lista.cpp

obj/kolejka.o: src/kolejka.cpp inc/kolejka.hh
	g++ ${CPPFLAGS} -o obj/kolejka.o src/kolejka.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

obj/quicksort.o: src/quicksort.cpp inc/quicksort.hh
	g++ ${CPPFLAGS} -o obj/quicksort.o src/quicksort.cpp
clean:
	rm -f obj/*.o qsort

