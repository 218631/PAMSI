#ifndef HASH_ARRAY_HH
#define HASH_ARRAY_HH
#include "Interface_Hash_array.hh"
#include "list.hh"

using namespace std;

class Hash_array :public Interface_hash_array{
  list* Array;
  int Size;
public:
  Hash_array();
  int Hash(string);
  void Add(string,int);
  void Remove(string);
  int Get(string);
  int  operator [] (const string key) const;
  int operator [] (string key);
};

#endif
