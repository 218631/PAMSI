#ifndef ARRAY_HH
#define ARRAY_HH
#include "interface_array.hh"
#include "node.hh"
#include "list.hh"

class Array :public interface_array{

  int* pointer;

  int size;

  int amount_of_elements;

public:

  Array();

  ~Array();

  void add(node x);

  void power(node x);

  void multiply(node x);

};


#endif
