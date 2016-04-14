#ifndef lista_hh
#define lista_hh
#include "node.hh"
class InterfaceList
{
public:
  virtual void add(int element, int position)=0;
  virtual void remove(int position)=0;
  virtual int get(int position)=0;
  virtual int size()=0;
};


class List : public InterfaceList
{
  int Size;
  node* head;
  node* temp;
  node* temp2;
public:
  List();
  void add(int element, int position);
  void remove(int position);
  int get(int position);
  int size();
};
#endif
