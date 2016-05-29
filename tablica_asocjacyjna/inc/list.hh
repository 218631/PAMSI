#ifndef LIST_HH
#define LIST_HH

#include "interface_list.hh"
#include "node.hh"

class list :public interface_list{

  int list_size;

  node* first;
  
 public:

  list();
  
  ~list();
  
  void add(int,int);
  
  void remove(int);
  
  int get(int);
  
  int size();

  void fill(int);
};

#endif
