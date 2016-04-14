#ifndef INTERFACE_QUEUE_HH
#define INTERFACE_QUEUE_HH

#include <math.h>
#include <iostream>
#include "list.hh"

using namespace std;

class interface_queue{
public:
  virtual int size()=0;
  virtual bool empty()=0;
  virtual void enqueue(int)=0;
  virtual int dequeue()=0;
};

#endif
