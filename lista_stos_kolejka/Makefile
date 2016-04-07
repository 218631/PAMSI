CPPFLAGS= -c -g -Iinc -Wall -pedantic

__start__: lista_stos_kolejka
	./lista_stos_kolejka

lista_stos_kolejka: obj/main.o obj/stos.o obj/kolejka.o obj/lista.o obj/stoper.o
	g++ -Wall -pedantic -o lista_stos_kolejka obj/main.o obj/kolejka.o obj/stos.o obj/lista.o obj/stoper.o

obj/main.o: src/main.cpp inc/stos.hh inc/lista.hh inc/kolejka.hh\
        inc/element.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/stos.o: src/stos.cpp inc/stos.hh
	g++ ${CPPFLAGS} -o obj/stos.o src/stos.cpp

obj/lista.o: src/lista.cpp inc/lista.hh 
	g++ ${CPPFLAGS} -o obj/lista.o src/lista.cpp

obj/kolejka.o: src/kolejka.cpp inc/kolejka.hh
	g++ ${CPPFLAGS} -o obj/kolejka.o src/kolejka.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f obj/*.o lista_stos_kolejka
