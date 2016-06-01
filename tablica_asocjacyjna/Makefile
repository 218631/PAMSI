CPPFLAGS= -c -g -Iinc -std=c++11 -Wall -pedantic

__start__: hash
	./hash

hash: obj/main.o obj/Hash_array.o  obj/list.o obj/stoper.o
	g++ -Wall -pedantic -o hash obj/main.o obj/Hash_array.o obj/list.o obj/stoper.o

obj/main.o: src/main.cpp inc/Hash_array.hh inc/list.hh  inc/node.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Hash_array.o: src/Hash_array.cpp inc/Hash_array.hh
	g++ ${CPPFLAGS} -o obj/Hash_array.o src/Hash_array.cpp

obj/list.o: src/list.cpp inc/list.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/list.o src/list.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

clean:
	rm -f obj/*.o hash

