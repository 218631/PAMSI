#ifndef INTERFACE_GRAPH_HH
#define	INTERFACE_GRAPH_HH
#include "list.hh"

class Interface_Graph{
public:
  virtual void add_vertex(int vertex_number)=0;
  virtual void add_link(int first_vertex,int second_vertex)=0;
  virtual list neighbours_list(int vertex_number)=0;
  virtual bool is_neighbour(int, int)=0;
  virtual int vertexes_amount()=0;
  virtual int links_amount()=0;
 };
  
#endif
