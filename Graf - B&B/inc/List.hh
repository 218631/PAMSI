#ifndef LIST_HH
#define LIST_HH

#include "interface_list.hh"
#include "node.hh"

class List :public interface_list{

  int List_size;

  node* first;
  
 public:

  List();
  
  ~List();
  
  void add(int,int);
  
  void remove(int);
  
  int get(int);
  
  int size();

  void fill(int);
};

#endif
