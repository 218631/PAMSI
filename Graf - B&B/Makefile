CCFLAGS= -Iinc -std=c++11 -g

start: bnb
	./bnb

bnb:   obj obj/Graph.o  obj/stoper.o obj/BnB.o obj/List.o  src/main.cpp 
	g++ $(CCFLAGS) src/main.cpp  obj/List.o obj/Graph.o obj/BnB.o obj/stoper.o -o bnb

obj/stoper.o: src/stoper.cpp inc/stoper.hh
	g++ $(CCFLAGS) -c src/stoper.cpp -o obj/stoper.o

obj/List.o: src/List.cpp inc/List.hh
	g++ $(CCFLAGS) -c src/List.cpp -o obj/List.o

obj/Graph.o: src/Graph.cpp inc/Graph.hh
	g++ $(CCFLAGS) -c src/Graph.cpp -o obj/Graph.o

obj/BnB.o: src/BnB.cpp inc/BnB.hh
	g++ $(CCFLAGS) -c src/BnB.cpp -o obj/BnB.o

clean:
	rm -f obj/*.o
