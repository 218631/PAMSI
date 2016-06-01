#ifndef NODE_HH
#define NODE_HH

#include <string>

using namespace std;

class node{
  int element;
  string key;
  node* next;
  friend class list;
};

#endif
