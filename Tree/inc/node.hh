#ifndef NODE_HH
#define NODE_HH
#include <string>

class node{
  int element;
  node* Left;
  node* Right;
  node* Parent;
  std::string Color;
  friend class Tree;
};

#endif
