#ifndef GRAPH_INTERFACE_HH
#define GRAPH_INTERFACE_HH
#include "List.hh"
class Graph_Interface{
public:
  virtual void addVertex(int) = 0;
  virtual void addEdge(int, int, int) = 0;
  virtual int removeVertex(int) = 0;
  virtual int removeEdge(int, int) = 0;
  virtual List getNeighbours(int) = 0;
};

#endif
