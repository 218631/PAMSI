#ifndef LIST_HH
#define LIST_HH

#include "interface_list.hh"
#include "node.hh"

using namespace std;

class list :public interface_list{

  int list_size;

  node* first;
  
 public:

  list();
  
  ~list();
  
  void add(int,int,string);
  
  void remove(std::string key);
  
  int get(std::string);
  
  int size();

};

#endif
