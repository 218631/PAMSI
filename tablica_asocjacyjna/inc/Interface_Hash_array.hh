#ifndef INTERFACE_HASH_ARRAY_HH
#define INTERFACE_HASH_ARRAY_HH
#include <string>
using namespace std;

class Interface_hash_array{

public:
  virtual int Hash(string)=0;
  virtual void Add(string,int)=0;
  virtual void Remove(string)=0;
  virtual int Get(string)=0;
};

#endif
