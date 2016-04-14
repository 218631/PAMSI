#ifndef kolejka_hh
#define kolejka_hh
#include "lista.hh"
class InterfaceQueue
{
int Size;
public:
virtual void push(int element)=0;
virtual int pop()=0;
virtual int size()=0;
};

class Queue : public InterfaceQueue
{
  int Size;
  List lista;
  int temp;
public:
void push(int element);
int pop();
int size();
};

#endif
