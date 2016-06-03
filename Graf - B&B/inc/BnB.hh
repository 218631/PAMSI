#ifndef BnB_HH
#define BnB_HH

#include "Graph.hh"
#include "Run_Interface.hh"

#define NOTFOUND 0
#define FOUND 1
#define BACK 2
#define VISITED 3

class BnB :public Graph, public Run{
  int** NeighboursBNB;
  int path_length;
public:
  void printNeighbours();
  int BandB(int one, int two);
  int BnB_ExtendedList(int one, int two);
    bool run();
    bool prepare(int size);
};

#endif
