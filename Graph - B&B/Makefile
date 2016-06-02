CPPFLAGS= -c -g -Iinc -std=c++11 -Wall -pedantic

__start__: graph_search
	./graph_search

graph_search: obj/main.o obj/Graph.o obj/list.o obj/stoper.o obj/FindPath.o
	g++ -Wall -pedantic -o graph_search obj/main.o obj/Graph.o obj/FindPath.o obj/list.o obj/stoper.o

obj/main.o: src/main.cpp inc/list.hh inc/Graph.hh inc/node.hh inc/FindPath.hh
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/list.o: src/list.cpp inc/list.hh inc/node.hh
	g++ ${CPPFLAGS} -o obj/list.o src/list.cpp


obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ ${CPPFLAGS} -o obj/stoper.o src/stoper.cpp

obj/Graph.o: src/Graph.cpp inc/Graph.hh
	g++ ${CPPFLAGS} -o obj/Graph.o src/Graph.cpp

obj/FindPath.o: src/FindPath.cpp inc/FindPath.hh
	g++ ${CPPFLAGS} -o obj/FindPath.o src/FindPath.cpp

clean:
	rm -f obj/*.o graph_search

