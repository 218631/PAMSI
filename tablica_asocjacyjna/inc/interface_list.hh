#ifndef INTERFACE_LIST_HH
#define INTERFACE_LIST_HH

#include "node.hh"
#include <iostream>
#include <assert.h>

using namespace std;

class interface_list{

public:

  virtual void add(int,int,string)=0;

  virtual void remove(string)=0;
  
  virtual int get(string)=0;

  virtual int size()=0;
  
};

#endif
