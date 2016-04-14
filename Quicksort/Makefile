CPPFLAGS= -c -g -Iinc -std=c++11  -Wall -pedantic

__start__: adt_lsq
	./adt_lsq

adt_lsq: obj/main.o obj/lista.o obj/stoper.o
	g++ -Wall -pedantic -o adt_lsq obj/main.o obj/lista.o obj/stoper.o

obj/main.o: src/main.cpp  inc/lista.hh  inc/node.hh inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp


obj/lista.o: src/lista.cpp inc/lista.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/lista.o src/lista.cpp


obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f obj/*.o adt_lsq

