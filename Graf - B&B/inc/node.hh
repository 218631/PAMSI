#ifndef NODE_HH
#define NODE_HH

struct node{
  int element;
  node* next;
  friend class List;
};

#endif
