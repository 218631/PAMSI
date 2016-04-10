#ifndef STACK_HH
#define STACK_HH


#include "interface_stack.hh"

class stack :public interface_stack{

  list stack_l;

public:

  stack(int);
  
  int size();

  bool empty();

  void push(int);

  int pop();

};

#endif
