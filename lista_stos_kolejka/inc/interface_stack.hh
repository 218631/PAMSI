#ifndef INTERFACE_STACK_HH
#define INTERFACE_STACK_HH

#include <math.h>
#include <iostream>
#include "list.hh"

using namespace std;

class interface_stack{
public:
  virtual int size()=0;
  virtual bool empty()=0;
  virtual void push()=0;
  virtual int pop()=0;
};

#endif
