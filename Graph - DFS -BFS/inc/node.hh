#ifndef NODE_HH
#define NODE_HH

class node{
  int element;
  node* next;
  friend class list;
  friend class Find_path;
};

#endif
