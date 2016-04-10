#ifndef QUEUE_HH
#define QUEUE_HH


#include "interface_queue.hh"

class queue :public interface_queue{

  list queue_l;

public:

  queue(int);
  
  int size();

  bool empty();

  void enqueue(int);

  int dequeue();

};

#endif
