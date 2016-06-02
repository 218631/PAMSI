#ifndef NODE_HH
#define NODE_HH

class node{
  node* next;
  int vertex;
  int value;
  friend class list;
  friend class Graph;
};

#endif
