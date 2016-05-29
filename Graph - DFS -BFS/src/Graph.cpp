#include "Graph.hh"

Graph::Graph(int amount){
  neighbours = new list[amount];
  size=0;
}
Graph::~Graph(){
 delete[] neighbours;
}
Graph::Graph(){
  neighbours = new list[1];
  size=0;
}

void Graph::add_vertex(int vertex_number){
  neighbours[vertex_number].add(vertex_number,0);
  size++;
}

void Graph::add_link(int first_vertex,int second_vertex){
  neighbours[first_vertex].add(second_vertex,neighbours[first_vertex].size());
  neighbours[second_vertex].add(first_vertex,neighbours[second_vertex].size());
}

list Graph::neighbours_list(int vertex_number){
  list temp;
  temp=neighbours[vertex_number];
  temp.remove(0);
  return temp;
}

bool Graph::is_neighbour(int one, int two){
  list temp;
  temp=neighbours_list(one);
  if(temp.get(two)==1)
    {
      return true;
    }
  else
    {
      return false;
    }
}

int Graph::get_size(){
  return size;
}

