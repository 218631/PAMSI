#ifndef GRAPH_HH
#define GRAPH_HH

#include "Interface_Graph.hh"
#include "list.hh"

class Graph :public Interface_Graph{
list *neighbours;
int size;

public:
  Graph(int amount);
  Graph();
  ~Graph();
  void add_vertex(int vertex_number);
  void add_link(int first_vertex,int second_vertex);
  list neighbours_list(int vertex_number);
  bool is_neighbour(int, int);
  int get_size();
  
};

#endif
