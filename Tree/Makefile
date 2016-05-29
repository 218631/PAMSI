CPPFLAGS= -c -g -Iinc -std=c++11 -Wall -pedantic

__start__: RBTree
	./RBTree

RBTree: obj/main.o obj/Tree.o  obj/stoper.o
	g++ -Wall -pedantic -o RBTree obj/main.o obj/Tree.o obj/list.o obj/stoper.o

obj/main.o: src/main.cpp  inc/Tree.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

obj/Tree.o: src/Tree.cpp inc/Tree.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/Tree.o src/Tree.cpp

clean:
	rm -f obj/*.o RBTree

