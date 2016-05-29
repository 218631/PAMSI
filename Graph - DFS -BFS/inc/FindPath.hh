#ifndef FINDPATH_HH
#define FINDPATH_HH

#include "list.hh"
#include "Graph.hh"
#include <cstdlib>

class Find_path{
  
  bool *Visited;
  Graph *graph;
  int size;
public:
  
  Find_path(int size);
  ~Find_path();

  int get_size();
  
  void Add_Vertex(int index);
  void Add_Link(int one,int two);
  list Neighbours_List(int index);
  bool Is_Neighbour(int one, int two);

  void DFS(int, int);
  void BFS(int, int);

};

#endif
