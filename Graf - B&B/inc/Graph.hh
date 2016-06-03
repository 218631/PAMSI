#ifndef GRAPH_HH
#define GRAPH_HH
#include "Graph_Interface.hh"
#include <cstring>

class Graph :public Graph_Interface{
  int** Neighbours;
  int size=10;
  friend class BnB;
public:
  Graph();
  ~Graph();
  
  void extend();
  void addVertex(int x);
  void addEdge(int x, int y, int value);
  int removeVertex(int) {return 0;}
  int removeEdge(int, int) {return 0;}
  List getNeighbours(int x);
};

#endif
