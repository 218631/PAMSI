CPPFLAGS= -c -g -Iinc -Wall -pedantic

__start__: adt_lsq
	./adt_lsq

adt_lsq: obj/main.o obj/stack.o obj/queue.o obj/list.o obj/stoper.o
	g++ -Wall -pedantic -o adt_lsq obj/main.o obj/queue.o obj/stack.o obj/list.o obj/stoper.o

obj/main.o: src/main.cpp inc/stack.hh inc/list.hh inc/queue.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/stack.o: src/stack.cpp inc/stack.hh
	g++ ${CPPFLAGS} -o obj/stack.o src/stack.cpp

obj/list.o: src/list.cpp inc/list.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/list.o src/list.cpp

obj/queue.o: src/queue.cpp inc/queue.hh
	g++ ${CPPFLAGS} -o obj/queue.o src/queue.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f obj/*.o adt_lsq

